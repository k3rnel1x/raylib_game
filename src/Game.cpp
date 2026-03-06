//
// Created by k3rnel1x on 06.03.2026.
//

#include "Game.h"

#include "game_config.h"

void Game::init()
{
    // Init game
    InitWindow(WINDOW_WIDTH, WINDOW_HEIGHT,  WINDOW_TITLE);
    SetTargetFPS(FPS);
}

int Game::run(int argc, char* argv[])
{
    // Run game
    while (!WindowShouldClose())
    {
        BeginDrawing();
            ClearBackground(RAYWHITE);
        EndDrawing();
    }

    return 0;
}
