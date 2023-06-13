cmake_minimum_required(VERSION 3.24)
project(Polygone C)

set(CMAKE_C_STANDARD 11)

add_executable(Polygone_convexe main.c)
target_link_libraries(Polygone_convexe -lm)
