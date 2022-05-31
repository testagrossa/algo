#!/bin/bash
EXERCISE=$1

# if file is a directory and contains /bin directory then clean it
function processFile() {
    FILE=$1
    if [[ -f "${FILE}/main.cpp" ]]
    then
      g++ -std=c++11 -fdiagnostics-color=always -g "./${FILE}/main.cpp" -o "./${FILE}/bin/main"
    else 
      echo "File ${FILE} is not a valid file"
    fi
}

# traverse and process all files in current directory
for FILE in "../exercises/${EXERCISE}"*
do
  echo "Processing ${FILE}"
  processFile $FILE
done