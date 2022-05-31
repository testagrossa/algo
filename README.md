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
./<exercise>/bin/<executable-file>
```
ie:
```sh
./1-two-number-sum/bin/A-two-number-sum
```

# how to build any excercise
from root folder, execute:
```sh
g++ -std=c++11 -fdiagnostics-color=always -g ./<exercise>/<file>.cpp -o ./<exercise>/bin/<file>
```
where <file> is the file name of a solution to the <exercise> we want to build
and the name of the executable being created under the exercise /bin/ folder.
ie:
```sh
g++ -std=c++11 -fdiagnostics-color=always -g ./1-two-number-sum/A-two-number-sum.cpp -o ./1-two-number-sum/bin/A-two-number-sum
```

# how to clean builds in /bin directories
from root folder run clean.sh script
