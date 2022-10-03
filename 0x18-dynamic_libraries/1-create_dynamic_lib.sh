#!/bin/bash

gcc *.c -c *.c
gcc *.o -shared -o liball.so
