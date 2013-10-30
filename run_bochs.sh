#!/bin/bash

# run_bochs.sh
# mounts the correct loopback device, runs bochs, then unmounts.

/sbin/losetup /dev/loop0 kernel
bochs -f bochsrc.txt
sleep 1
/sbin/losetup -d /dev/loop0
