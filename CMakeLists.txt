cmake_minimum_required(VERSION 3.22)
project(Introduction_to_Compilers)

set(CMAKE_CXX_STANDARD 14)

add_executable(Introduction_to_Compilers
        9cc/9cc.c
        9cc/Makefile
        9cc/test.sh
        test1.c
        test3.c 9cc/9cc.h)
