//
// Created by k3rnel1x on 07.03.2026.
//
#include "screens.h"

void MainMenuScreen::show(GameContext* gctx)
{
    do
    {

    } while (gctx->currScr == MAIN_SCR);
}

void SavesScreen::show(GameContext* gctx)
{
    do
    {

    } while (gctx->currScr == SAVES_SCR);
}

void PlayScreen::show(GameContext* gctx)
{
    gameplay.run(gctx);
}

