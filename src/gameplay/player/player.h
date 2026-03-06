//
// Created by k3rnel1x on 07.03.2026.
//

#ifndef PLAYER_H
#define PLAYER_H
#include "gameplay/kobject/entity/entity.h"


class Player : public Entity {
public:
    Player(Vector2 pos) : Entity(pos) { };
};



#endif //PLAYER_H
