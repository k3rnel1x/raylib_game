//
// Created by k3rnel1x on 07.03.2026.
//

#include "gameplay.h"

#include <iostream>

#include "game_config.h"


void Gameplay::setWorld(GameContext *gctx)
{
    Save* save = gctx->pickedSave;
    world = save->world;
}

void Gameplay::run(GameContext *gctx)
{
    // parseGameContext(gctx);
    do
    {
        try{
            world.draw();
        } catch (std::exception& e){
            if (e.what() == "EXIT_GAME_LOOP")
                gctx->currScr = MAIN_SCR;
        }

    } while (gctx->currScr == PLAY_SCR);
}
