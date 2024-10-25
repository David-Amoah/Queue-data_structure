cmake_minimum_required(VERSION 3.27)
project(Queue C)

set(CMAKE_C_STANDARD 99)

add_executable(Queue main.c
        queue.h
        queue.c
        status.h)
