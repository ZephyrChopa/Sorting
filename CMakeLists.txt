cmake_minimum_required(VERSION 3.17)
project(untitled)

set(CMAKE_CXX_STANDARD 14)

add_executable(untitled src/main.cpp src/sort.cpp include/sort.h src/random_array_gen.cpp include/random_array_gen.h)