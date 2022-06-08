# Description
This repo will contain the solutions for https://www.algoexpert.io/
Each solution will reside in its own file with propper summary + tests

# formatting

## using vscode
1. on vs-code go to Code > Preferences > Settings
2. look for `format on save`
3. check Editor: **Format On Save** option
4. check Editor: **Format On Save Mode** option is set to `file`

## using clang-format
1. install tools:
- pre-commit: https://pre-commit.com/
    MacOSX: `brew install pre-commit`
    Linux: `pip install pre-commit`

- clang-format
    MacOSX: `brew install clang-format`
    Linux: `sudo apt install clang-format`

2. install pre-commit hooks in the repo:
on ./githooks folder run: `pre-commit install`
this will prevent to commit unformatted code

3. execute format script:
from root folder run: `./script/format.sh`
this will format all ur *.cpp and *.h files

# bazel
1. install Bazel build system: https://bazel.build/install
    MacOSX: `brew install bazel`
2. commands from root directory:
```
    bazel build //lib:utils
    bazel run //exercises/1-two-number-sum:main
    bazel run //exercises/2-validate-subsequence:main
    bazel run //exercises/3-sorted-squared-array:main
    bazel test --test_output=errors //tests:tests
```

# OLD

## prerequicites
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

## buid exercise
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

## operation scripts
from root/scripts folder you can
- `build.sh` $excercise
    + script to build an excercise
    + this will create a /bin directory inside the exercise folder
- `run.sh` $excercise
    + script to run an excercise
    + this will execute the ./bin/main.cpp file generated from build process
- `clean.sh`
    + script to clean all exercises
    + this will remove all /bin directories in exercises, only keeping .gitkeep files
