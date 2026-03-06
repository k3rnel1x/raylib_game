//
// Created by k3rnel1x on 07.03.2026.
//

#ifndef PROPS_H
#define PROPS_H
#include "gameplay/kobject/kobject.h"


class Props : public KObject {
private:
    Texture2D   texture;
    std::string name;
public:
    Props(Vector2 pos) : KObject(pos) { };
    void setName(std::string name);
    void setTexture(Texture2D& texture);
    void draw() override;
};

#endif //PROPS_H
