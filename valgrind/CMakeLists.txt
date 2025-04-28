cmake_minimum_required(VERSION 3.30)
project(valgrind C)

set(CMAKE_C_STANDARD 17)

add_executable(valgrind
        src/bad_access.c
        src/bad_access.cpp
        src/double_delete.cpp
        src/double_free.c
        src/memory_leak.c
        src/memory_leak.cpp
        src/use_after_delete.cpp
        src/use_after_free.c
)