#ifndef GAME_CONTEXT_H
#define GAME_CONTEXT_H

#include <vector>

#include "gameplay/world/world.h"

typedef enum SCREEN_T {
    MAIN_SCR,
    SAVES_SCR,
    PLAY_SCR,
    GAME_EXIT
} SCREEN_T;

class Save
{
public:
    // World
    World world;
    // Player
    Player player;

    // Map
    Location map;
    std::vector<Entity> enemies;
    std::vector<Entity> peaceful;
    std::vector<Entity> lifeless;
    std::vector<Props>  background;

    void buildWorld();
};

typedef struct GameContext {
    SCREEN_T  currScr;
    Save*     pickedSave;
    std::vector<Save> saves;
} GameContext;

void Save::buildWorld()
{
    map.setBackground(&background);
    map.setLifeless(&background);
    map.setEnemies(&enemies);
    map.setPeaceful(&peaceful);

    world.setMap(&map);
    world.setPlayer(&player);
}

#endif