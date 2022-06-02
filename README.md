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
./exercises/<exercise>/bin/main
```
ie:
```sh
./exercises/1-two-number-sum/bin/main
```

# how to build any excercise
from root folder, execute:
```sh
g++ -std=c++11 -fdiagnostics-color=always -g ./<exercise>/main.cpp -o ./<exercise>/bin/main
```
where main is the file name of a solution to the <exercise> we want to build
and the name of the executable being created under the exercise /bin/ folder.
ie:
```sh
g++ -std=c++11 -fdiagnostics-color=always -g ./exercises/1-two-number-sum/main.cpp -o ./exercises/1-two-number-sum/bin/main
```

# operations
from root/scripts folder you can
- build.sh $excercise
    script to build an excercise
- run.sh $excercise
    script to run an excercise
- clean.sh
    script to clean /bin directories in exercises

# formatting
1. on vs-code go to Code > Preferences > Settings
2. look for `format on save`
3. check Editor: **Format On Save** option
