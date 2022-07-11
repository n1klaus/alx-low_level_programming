#!/bin/bash
gcc -Wall -pedantic -Wextra -std=gnu89 -c -fPIC _*.c && \
gcc -Wall -pedantic -Wextra -std=gnu89 -shared -o liball.so *.o
