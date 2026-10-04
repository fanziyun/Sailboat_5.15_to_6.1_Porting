#!/bin/bash
echo "=== mem/swap ==="
free -m
echo "=== vmstat (3s x3): si/so=swap, bi/bo=disk ==="
vmstat 1 3
echo "=== D-state procs (disk blocked) ==="
ps -eo pid,stat,wchan:20,comm | awk '$2 ~ /D/' | head
echo "=== cpu per proc ==="
top -bn1 -o %CPU | tail -15
