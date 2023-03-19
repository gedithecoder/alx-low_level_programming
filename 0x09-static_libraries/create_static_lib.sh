#!/bin/bash
ggc -c ./*.c
ar rcs liball.a ./*.c
randlib liball.a
