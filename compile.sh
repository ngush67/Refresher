#!/bin/bash

# Compile the C file
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 "$1" -o "${1%.c}"
