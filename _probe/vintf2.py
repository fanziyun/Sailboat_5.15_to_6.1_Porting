import subprocess, re

ADB = r"C:\Program Files (x86)\platform-tools\adb.exe"
D = ["-s", "192.168.31.124:38555"]


def sh(cmd):
    p = subprocess.run([ADB] + D + ["shell"], input=cmd, capture_output=True,
                       text=True, errors="replace", timeout=120)
    return p.stdout + p.stderr


print("=== manifest_kalama.xml")
o = sh("su -c cat /vendor/etc/vintf/manifest_kalama.xml")
for kw in ["<kernel", "android.hardware.boot", "android.hardware.gatekeeper",
           "android.hardware.keymaster", "assembly_version"]:
    hits = [m.start() for m in re.finditer(re.escape(kw), o)]
    print(kw, "hits=", len(hits))
    for h in hits[:2]:
        s = max(0, h - 100)
        print("   >>", o[s:h + 220].replace("\n", " "))

print("=== device-manifest overrides in /system/etc/vintf/manifest")
print(sh("su -c ls /system/etc/vintf/manifest"))

print("=== does anything reference android14-6.1 anywhere in vintf")
print(sh("su -c grep -rl android14-6.1 /system/etc/vintf /vendor/etc/vintf 2>/dev/null"))

print("=== ro.board.first_api.level / ro.product.main_api.level")
print(sh("getprop ro.board.first_api.level; getprop ro.product.first_api.level; getprop ro.vendor.api_level"))

print("=== vndk apex / vndk version dirs")
print(sh("su -c ls /apex/com.android.vndk.current 2>/dev/null; su -c ls /apex/ | head -40"))

print("=== modules.load line count and dirs")
print(sh("su -c wc -l /vendor/lib/modules/modules.load /vendor/lib/modules/modules.dep /vendor/lib/modules/modules.softdep 2>/dev/null"))
print(sh("su -c head -8 /vendor/lib/modules/modules.load"))

print("=== kernel release / uname")
print(sh("uname -r; uname -a; su -c cat /proc/sys/kernel/osrelease"))

print("=== KMI symbol dir on device")
print(sh("su -c ls -d /lib/modules/* 2>/dev/null; su -c ls /lib/modules/*/ 2>/dev/null | head -30"))

print("=== avb state / slot")
print(sh("getprop ro.boot.slot_suffix; getprop ro.boot.verifiedbootstate; getprop ro.boot.vbmeta.device_state; getprop ro.debuggable; getprop ro.secure"))
