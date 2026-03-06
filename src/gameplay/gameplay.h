//
// Created by k3rnel1x on 07.03.2026.
//

#ifndef GAMEPLAY_H
#define GAMEPLAY_H
#include "ui/context/game_context.h"

class Gameplay {
private:
    World world;
    void parseGameContext(GameContext* gctx);

public:
    void run(GameContext* gctx);
};

#endif //GAMEPLAY_H
