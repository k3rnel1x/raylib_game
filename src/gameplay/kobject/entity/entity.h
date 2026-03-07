//
// Created by k3rnel1x on 07.03.2026.
//

#ifndef ENTITY_H
#define ENTITY_H
#include "gameplay/kobject/kobject.h"
#include "gameplay/location/location.h"


class Entity : public KObject{
private:
    Texture2D texture;
    std::string name;
    Location* map;
public:
    Entity(Vector2 vec) : KObject(vec) { };
    void setMap(Location* map);
    void setName(std::string name);
    void setTexture(Texture2D& texture);
    Vector2 convertCoords();

    void draw() override;
};



#endif //ENTITY_H
