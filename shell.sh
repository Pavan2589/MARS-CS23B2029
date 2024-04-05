#!/bin/bash

if [ $# -ne 1 ]; then
    echo "Using: $0 <directory_path>"
    exit 1
fi

if [ ! -d "$1" ]; then
    echo " $1 is not a directory"
    exit 1
fi

read -p "Enter the current file extension to replace : " current_extension
read -p "Enter the new file extension : " new_extension

find "$1" -type f -name "*.$current_extension" | while read -r file; do
    mv "$file" "${file%.*}.$new_extension"
done

echo "File extension changed from .$current_extension to .$new_extension for all files in $1."
