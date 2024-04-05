#!/bin/bash
# Get CWD from user
read -p "Enter the Current Working Directory: " cwd

# Create the "Modified" directory if it does not exist.
mkdir -p "$cwd/Modified"
# Recursively search for .txt files in the CWD and copy them to "Modified" with a .bak extension
find "$cwd" -type f -name "*.txt" -exec cp --parents {} "$cwd/Modified" \; -exec sh -c 'mv "$0" "${0%.txt}.bak"' {} \;

echo "Files have been copied and renamed succesfully"
