cmake_minimum_required(VERSION 3.21)
project(atcoder_gtest)

set(CMAKE_CXX_STANDARD 11)

add_subdirectory(./tests)
add_executable(main_app main.cpp)
