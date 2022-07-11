#!/bin/bash
gcc -Wall -pedantic -Wextra -std=gnu89 -c -time -fPIC *.c && \
gcc -Wall -pedantic -Wextra -std=gnu89 -shared -o libdynamic.so *.o
