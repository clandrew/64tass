# 64tass
This repository contains a fork of 64tass, command-line assembler for the 65xx processor family. 

This code is based off of the download on the project page on SourceForge:
[https://sourceforge.net/projects/tass64/](https://sourceforge.net/projects/tass64/)

This project uses the GNU General Public License version 2.0 (GPLv2) license. For more information, see the LICENSE file.

List of changes:
* This readme file was added
* After assembling, only print "Errors:" and "Warnings:" if nonzero errors or warnings. (Reason: otherwise Visual Studio gets confused)
* Add a debug build config to makefile
* Fix debug build

## Build instructions (Windows)
This is for building the Windows version, on Windows. This is one way of doing it. Other ways may work, as well.

1. Set up and launch [Windows Subsystem for Linux (WSL)](https://docs.microsoft.com/en-us/windows/wsl/about). For distribution, choose Ubuntu 18.04 LTS.
2. Run the following commands
```
apt install make

apt-get update

sudo apt-get install build-essential

sudo apt-get install gcc-mingw-w64

make -f makefile.win
```
At the end, 64tass.exe will be placed in the source folder.

After making changes, use
```
make clean

make -f makefile.win
```
to re-compile.
