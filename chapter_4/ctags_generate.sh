#!/bin/bash
CTAGS_DIR=/home/latty/Prog/IDE/ctags/clang-ctags/
time find src -name '*.[ch]' -o -name '*.[ch]pp' -o -name '*.cc' |
xargs ${CTAGS_DIR}/clang-ctags -e -f tagfile --append --compile-commands=build/compile_commands.json
#xargs ${CTAGS_DIR}/clang-ctags -v -e -f tagfile --append --compile-commands=build/compile_commands.json
