#!/bin/bash

find ../ -iname *.cpp -o -iname *.cpp | xargs clang-format -i --style=file