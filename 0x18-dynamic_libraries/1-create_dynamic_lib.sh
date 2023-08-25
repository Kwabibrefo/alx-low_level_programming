#!/bin/bash

# List of source code files
source_files=(
    "_putchar.c"
    "_islower.c"
    "_isalpha.c"
    "_abs.c"
    "_isupper.c"
    "_isdigit.c"
    "_strlen.c"
    "_puts.c"
    "_strcpy.c"
    "_atoi.c"
    "_strcat.c"
    "_strncat.c"
    "_strncpy.c"
    "_strcmp.c"
    "_memset.c"
    "_memcpy.c"
    "_strchr.c"
    "_strspn.c"
    "_strpbrk.c"
    "_strstr.c"
)

# Compile each source file into object files
for source_file in "${source_files[@]}"; do
    gcc -c -Wall -Werror -fpic "$source_file"
done

# Link object files into a dynamic library
gcc -shared -o liball.so*.o

# Clean up object files
rm *.o

echo "Dynamic library libdynamic.so created successfully!"
