cmake_minimum_required(VERSION 3.26)
project(SPA5 C)

set(CMAKE_C_STANDARD 17)

add_executable(SPA5
        src/main.c
        src/reportio.c
        src/readevents.c)
