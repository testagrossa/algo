#!/bin/bash

# remove all files and directories except .gitkeep
function cleanBin() {
    DIR=$1
    for FILE in "${DIR}/bin"/*
    do
        if [[ $FILE != .gitkeep ]]
        then
            rm -rf $FILE
        fi
    done
}

# if file is a directory and contains /bin directory then clean it
function processFile() {
    FILE=$1
    if [[ -d "${FILE}/bin" ]]
    then
        cleanBin $FILE
    fi
}

# traverse and process all files in current directory
for FILE in *
do
  processFile $FILE
done

