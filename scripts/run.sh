#!/bin/bash
EXERCISE=$1

# if file is a directory and contains /bin directory then clean it
function processFile() {
    EXERCISE=$1
    if [[ -f "${EXERCISE}/bin/main" ]]
    then
        "${EXERCISE}/bin/main"
    else 
      echo "File ${EXERCISE} is not a valid file"
    fi
}

# traverse and process all files in current directory
for FILE in "../exercises/${EXERCISE}"*
do
  echo "Processing ${FILE}"
  processFile $FILE
done