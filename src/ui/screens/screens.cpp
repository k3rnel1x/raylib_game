//
// Created by k3rnel1x on 07.03.2026.
//
#include "screens.h"
#include <iostream>

#include "game_config.h"

void MainMenuScreen::show(GameContext* gctx)
{
    do
    {
        if (GetKeyPressed() == KEY_ENTER) gctx->currScr = SAVES_SCR;
        BeginDrawing();
            ClearBackground(WHITE);
            DrawText("MainMenuScreen", WINDOW_WIDTH / 2, WINDOW_HEIGHT / 2, WINDOW_HEIGHT/20, RED);
        EndDrawing();
    } while (gctx->currScr == MAIN_SCR);
}

void SavesScreen::show(GameContext* gctx)
{
    do
    {
        if (GetKeyPressed() == KEY_ENTER) gctx->currScr = PLAY_SCR;
        BeginDrawing();
            ClearBackground(RED);
            DrawText("SavesScreen", WINDOW_WIDTH / 2, WINDOW_HEIGHT / 2, WINDOW_HEIGHT/20, WHITE);
        EndDrawing();
    } while (gctx->currScr == SAVES_SCR);
}

void PlayScreen::show(GameContext* gctx)
{
    gameplay.setWorld(gctx);
    gameplay.run(gctx);
}

