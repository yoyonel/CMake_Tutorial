#!/bin/bash
mkdir build 
cd build
#cmake -G "Unix Makefiles" ..
#cmake -G "Sublime Text 2 - Unix Makefiles" ..
cmake -DCMAKE_EXPORT_COMPILE_COMMANDS=1 -G "Sublime Text 2 - Unix Makefiles" ..
cd -