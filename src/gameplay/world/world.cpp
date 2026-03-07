//
// Created by k3rnel1x on 07.03.2026.
//

#include "world.h"

void World::draw()
{
    if (player && map)
    {
        do{
            map->draw();
            player->draw();
        } while (GetKeyPressed() == KEY_ESCAPE);
    }
}
