# Cmake Demo

This is a simple cmake based project to demostate compiling using cmake for a C project. The project provides a skeletal folder structure. The objective is to project a skeletal structure for a multiplatform C based proejct that can be combiled on Windows, Linux and macOS.

## Folders
- _src_ source files, ".c" files.
- _includes_ include files, ".h" header files.
- _resources_ any other required files, images, etc.,
- _cmake_ any additional cmake modules like finding other libraries. In place for the future.

## Requires

- CMake

## Installation

To install creata a build directory, generate the required makefile using Cmake and then run make to compile the project.

    mkdir build
    cd build
    cmake ..
    make


    export SDL2DIR=/usr/local/include/SDL2
    export SDL2IMAGEDIR