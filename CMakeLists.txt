cmake_minimum_required(VERSION 4.2)
project(raylib_game)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_COMPILER "/usr/bin/g++")
set(CMAKE_C_COMPILER   "/usr/bin/gcc")

include_directories(src)

link_libraries(raylib)

add_executable(raylib_game
        # Sources
        src/game.cpp
        src/game.h
        src/main.cpp
        src/game_config.h
)
