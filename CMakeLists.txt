cmake_minimum_required(VERSION 3.10)

project(MazeRunnerGame)

set(CMAKE_CXX_STANDARD 14)

find_package(SDL2 REQUIRED)
include_directories(${SDL2_INCLUDE_DIRS})

add_executable(MazeRunnerGame 
    src/main.cpp
)

target_link_libraries(MazeRunnerGame ${SDL2_LIBRARIES})