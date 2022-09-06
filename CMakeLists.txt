cmake_minimum_required(VERSION 3.21)
project(CopyConstructor1)

set(CMAKE_CXX_STANDARD 14)

add_executable(CopyConstructor1 main.cpp CopCon.cpp CopCon.h)
