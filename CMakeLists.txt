cmake_minimum_required(VERSION 3.10)

project(Tema3)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

include_directories(include)

add_executable(Tema3 src/Player.cpp src/TeamManager.cpp main.cpp)