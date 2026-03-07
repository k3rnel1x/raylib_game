//
// Created by k3rnel1x on 07.03.2026.
//

#ifndef WORLD_H
#define WORLD_H
#include <map>
#include <vector>
#include "gameplay/kobject/kobject.h"
#include "gameplay/kobject/entity/entity.h"
#include "gameplay/location/location.h"
#include "gameplay/player/player.h"


class World : public KObject {
private:
    Player* player;
    Location* map;
public:
    World(Vector2 worldCoords) : KObject(worldCoords) { };
    void setPlayer(Player* player);
    void setMap(Location* map);

    void draw() override;
};



#endif //WORLD_H
