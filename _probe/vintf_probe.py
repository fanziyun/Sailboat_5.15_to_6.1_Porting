import subprocess, re

ADB = r"C:\Program Files (x86)\platform-tools\adb.exe"
D = ["-s", "192.168.31.124:38555"]


def sh(cmd):
    p = subprocess.run([ADB] + D + ["shell"], input=cmd, capture_output=True,
                       text=True, errors="replace", timeout=120)
    return p.stdout + p.stderr


out = sh("su -c cat /system/etc/vintf/compatibility_matrix.device.xml")
print("=== device matrix")
for kw in ["<kernel", "android.hardware.boot", "assembly_version",
           "android13-5.15", "android14-6.1", "kernel version"]:
    hits = [m.start() for m in re.finditer(re.escape(kw), out)]
    print(kw, "hits=", len(hits))
    for h in hits[:3]:
        s = max(0, h - 150)
        print("   >>", out[s:h + 150].replace("\n", " "))

print("=== vendor manifest boot HAL")
out2 = sh("su -c cat /vendor/etc/vintf/manifest_kalama.xml")
for m in re.finditer("android.hardware.boot", out2):
    s = max(0, m.start() - 120)
    print("   >>", out2[s:m.end() + 220].replace("\n", " "))

print("=== manifest.xml head")
print(sh("su -c cat /vendor/etc/vintf/manifest.xml"))

print("=== KernelSU props")
for k in ["me.weishu.kernelsu", "ksu", "KSU", "konbind"]:
    o = sh("getprop | grep -i " + k)
    if o.strip():
        print(k, o.strip()[:600])
