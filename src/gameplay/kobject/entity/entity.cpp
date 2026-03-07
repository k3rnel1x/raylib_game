//
// Created by k3rnel1x on 07.03.2026.
//

#include "entity.h"
#include <raylib.h>
#include "game_config.h"

void Entity::setMap(Location *map)
{
    this->map = map;
}

void Entity::setName(std::string name)
{
    this->name = name;
}

void Entity::setTexture(Texture2D &texture)
{
    this->texture = texture;
}

Vector2 Entity::convertCoords()
{
    return (Vector2){
        .x = this->x() + WINDOW_WIDTH  / 2,
        .y = this->y() + WINDOW_HEIGHT / 2
    };
}

void Entity::draw()
{
    BeginDrawing();
        Vector2 placedVec = convertCoords();
        DrawTexture(texture, placedVec.x, placedVec.y, WHITE);
    EndDrawing();
}
