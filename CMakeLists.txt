cmake_minimum_required(VERSION 4.2)
project(raylib_game)

set(CMAKE_CXX_STANDARD 14)

include_directories(src)

link_libraries(raylib)

add_executable(raylib_game
        # Sources
        src/Game.cpp
        src/Game.h
        src/main.cpp
        src/game_config.h
)
