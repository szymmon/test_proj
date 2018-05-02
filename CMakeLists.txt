cmake_minimum_required(VERSION 2.8)

project(jucitest)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++1z -Wall -Wextra")

add_executable(jucitest main.cpp klas.cpp)
