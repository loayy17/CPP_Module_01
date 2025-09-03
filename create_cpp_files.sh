#!/bin/zsh

# Usage: ./create_cpp_files.sh <subdir> <file1> <file2> ...
# Creates specified files in the given subdir

if [ "$#" -lt 2 ]; then
    echo "Usage: $0 <subdir> <file1> <file2> ..."
    exit 1
fi

SUBDIR="$1"
shift

mkdir -p "$SUBDIR"

for FILE in "$@"; do
    touch "$SUBDIR/$FILE"
done

echo "Files created in $SUBDIR:"
ls "$SUBDIR"
