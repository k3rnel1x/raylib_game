//
// Created by k3rnel1x on 07.03.2026.
//

#ifndef PLAYER_H
#define PLAYER_H
#include "gameplay/kobject/entity/entity.h"
#include "gameplay/location/location.h"


class Player : public Entity {
public:
    Player(Vector2 pos) : Entity(pos) { setName("Player"); };
};



#endif //PLAYER_H
