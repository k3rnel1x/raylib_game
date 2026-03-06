//
// Created by k3rnel1x on 06.03.2026.
//

#include "game.h"
#include "game_config.h"

Game::Game()
{
    gctx = new GameContext;
    gctx->currScr = MAIN_SCR;
}

Game::~Game()
{
    delete gctx;
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
        case MAIN_SCR:
            mainScr.show(gctx);
            break;

        case SAVES_SCR:
            savesScr.show(gctx);
            break;

        case PLAY_SCR:
            playScr.show(gctx);
            break;
            
        }
    } while(gctx->currScr != GAME_EXIT);

    return 0;
}
