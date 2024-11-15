cmake_minimum_required(VERSION 3.10)
project(Tema1)

set(CMAKE_CXX_STANDARD 17)

include_directories(include)

add_executable(Tema1 main.cpp src/Team.cpp src/FootballPlayer.cpp)
