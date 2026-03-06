//
// Created by k3rnel1x on 06.03.2026.
//

#include "game.h"
#include "game_config.h"

Game::Game()
{
    gctx = new GameContext;
}

Game::~Game()
{
    delete GameContext;
}

void Game::init()
{
    // Init game
    InitWindow(WINDOW_WIDTH, WINDOW_HEIGHT,  WINDOW_TITLE);
    SetTargetFPS(FPS);
}

int Game::run(int argc, char* argv[])
{
    // Run game
    
    do {
        switch(gctx->currScr){
        case MAIN_MENU:
            ctx->currScr = mainScr.show();
            break;

        case SAVES_MENU:
            savesSrc.setSaves(gctx->saves);
            ctx->currScr    = savesScr.show();
            ctx->pickedSave = savesScr.getPickedSave();
            break;

        case PLAY_MENU:
            playSrc.setSave();
            ctx->currScr    = playScr.show();
            ctx->pickedSave = playSrc.getSave()
            break;
            
        }
    } while(ctx->currScr != GAME_EXIT);

    return 0;
}
