//
// Created by k3rnel1x on 06.03.2026.
//

#ifndef GAME_H
#define GAME_H
#include <raylib.h>
#include "game_config.h"
#include "screens/screens.h"

class Game {
private:
    MainMenuScreen mainScr;
    SavesScreen    savesScr;
    PlayScreen     playScr;

    GameContext*    gctx;  
public:
    Game();
    void init();
    int  run(int argc, char* argv[]);
};

#endif //GAME_H