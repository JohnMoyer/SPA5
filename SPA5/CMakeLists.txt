cmake_minimum_required(VERSION 3.26)
project(SPA5 C)

set(CMAKE_C_STANDARD 17)

add_executable(SPA5 main.c
        reportio.c
        readevents.c)
