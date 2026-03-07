//
// Created by k3rnel1x on 07.03.2026.
//

#include "props.h"

void Props::setName(std::string name)
{
    this->name = name;
}

void Props::setMap(Location *map)
{
    this->map = map;
}

void Props::setTexture(Texture2D &texture)
{
    this->texture = texture;
}

void Props::draw()
{
    // TODO implement drawing a static mesh (Реквизит)
}
