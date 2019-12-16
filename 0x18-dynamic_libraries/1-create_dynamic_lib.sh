#!/bin/bash
gcc -fpic -Wall -Werror -Wextra -pedantic *.c -shared -o liball.so
