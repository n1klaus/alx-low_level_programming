#!/bin/bash
gcc -Wall -pedantic -Wextra -std=gnu89 -c *.c && ar rcs liball.a *.o
