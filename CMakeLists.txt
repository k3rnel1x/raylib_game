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
        src/ui/context/context.h
        src/ui/context/game_context.h
        src/ui/screens/screens.h
        src/ui/screens/screens.cpp
        src/ui/states/states.h
        src/gameplay/gameplay.h
        src/gameplay/gameplay.cpp
        src/gameplay/world/world.cpp
        src/gameplay/world/world.h
        src/gameplay/player/player.cpp
        src/gameplay/player/player.h
        src/gameplay/kobject/kobject.cpp
        src/gameplay/kobject/kobject.h
        src/gameplay/kobject/props/props.cpp
        src/gameplay/kobject/props/props.h
        src/gameplay/kobject/entity/entity.cpp
        src/gameplay/kobject/entity/entity.h
        src/gameplay/location/location.cpp
        src/gameplay/location/location.h
)
