# Description
This repo will contain the solutions for https://www.algoexpert.io/
Each solution will reside in its own file with propper summary + tests

# Prerequicites. 
1. install g++ and clang for ur OS
check installation versions:
```sh
g++ --version
clang --version
```
2. install vscode
https://code.visualstudio.com/download
3. install cpp extension
https://code.visualstudio.com/docs/languages/cpp
4. build the program
open the file in vscode and from it execute: Terminal > Run Build Task
5. execute the program
go to ./bin directory and run executable file
```sh
./bin/<executable-file>
```

# how to build any excercise
from exercise file folder, execute:
```sh
g++ -std=c++11 -fdiagnostics-color=always -g ./<file>.cpp -o ./bin/<file>
```
where <file> is the file name of the exercise to build
and the name of the executable being created under ./bin/ folder

