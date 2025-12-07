FROM randomdude/gcc-cross-x86_64-elf
# docker pull randomdude/gcc-cross-x86_64-elf
# use this line to pull this gcc cross for 64bit os 

RUN apt-get update
RUN apt-get upgrade -y
RUN apt-get install -y nasm
RUN apt-get install -y xorriso
RUN apt-get install -y grub-pc-bin
RUN apt-get install -y grub-common

VOLUME /root/env
WORKDIR /root/env

# docker build buildenv -t whaleos-buildenv
# use this line to build docker img 
# https://qemu.weilnetz.de/w64/
# under sect (windows 64) download qemu.exe installer
