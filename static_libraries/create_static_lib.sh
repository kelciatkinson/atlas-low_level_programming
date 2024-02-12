#!/bin/bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -c *.c
gcc -rc liball.a *.o
ranlib liball.a
