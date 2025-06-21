# *amr_dashboard*
AMR dashboard (GUI)

## Table of contents
0. [Table of contents](#table-of-contents)
1. [Software requirements](#software-requirements)
2. [Software requirements for development](#software-requirements-for-development)
3. [Clone repository](#clone-repository)
4. [Build project](#build-project)

## Software requirements
*Placeholder for future context*

## Software requirements for development
* Git 2.43.0
* CMake 3.30.4
* GCC 14.2.0 or WinLibs MinGW-w64 12.0.0 UCRT - release 2
* SFML 3.0.0 (added as git submodule)
* VSCode 1.100.2 (optional)

## Clone repository
git clone --recurse-submodules git@github.com:yazimut/amr_dashboard.git

## Build project
1. Create directory for build with 'mkdir build'
2. Change current directory with 'cd build'
3. Configure CMake project with 'cmake -DCMAKE_BUILD_TYPE=Debug -DCMAKE_C_COMPILER=/usr/bin/gcc -DCMAKE_CXX_COMPILER=/usr/bin/g++ ..'
4. Build project with 'cmake --build .'
