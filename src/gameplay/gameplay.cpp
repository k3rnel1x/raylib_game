//
// Created by k3rnel1x on 07.03.2026.
//

#include "gameplay.h"

#include <iostream>

#include "game_config.h"

void Gameplay::run(GameContext* gctx)
{
    // parseGameContext(gctx);
    do
    {
        if (IsKeyDown(KEY_H))
        {
            gctx->currScr == GAME_EXIT;
        }
        else
        {
            BeginDrawing();
            ClearBackground(YELLOW);
            if (IsKeyDown(KEY_A))
                DrawText("Right", WINDOW_WIDTH / 2, WINDOW_HEIGHT / 2, WINDOW_HEIGHT/20, BLACK);
            if (IsKeyDown(KEY_D))
                DrawText("Left", WINDOW_WIDTH / 2, WINDOW_HEIGHT / 2, WINDOW_HEIGHT/20, BLACK);
            if (IsKeyDown(KEY_S))
                DrawText("Bottom", WINDOW_WIDTH / 2, WINDOW_HEIGHT / 2, WINDOW_HEIGHT/20, BLACK);
            if (IsKeyDown(KEY_W))
                DrawText("Top", WINDOW_WIDTH / 2, WINDOW_HEIGHT / 2, WINDOW_HEIGHT/20, BLACK);
            EndDrawing();
        }
    } while (gctx->currScr == PLAY_SCR);
}
