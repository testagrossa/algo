#!/bin/bash

set -e

function append_newline {
    if [[ -z "$(tail -c 1 "$1")" ]]; then
        :
    else
        echo >> "$1"
    fi
}

# Find all source files using Git to automatically respect .gitignore
FILES=$(git ls-files "*.h" "*.cpp" "*.c" "*.cc")

# Run clang-format
clang-format -i ${FILES}

# Check newlines
for f in ${FILES}; do
    append_newline $f
done
