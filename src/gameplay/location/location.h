//
// Created by k3rnel1x on 07.03.2026.
//

#ifndef LOCATION_H
#define LOCATION_H
#include <vector>
#include "gameplay/kobject/kobject.h"
#include "gameplay/kobject/entity/entity.h"
#include "gameplay/kobject/props/props.h"


class Location : public KObject {
private:
    /* Actionable */
    std::vector<Entity>* enemies;
    std::vector<Entity>* peaceful;
    std::vector<Entity>* lifeless;

    /* Non-actionable */
    std::vector<Props>*  background;

public:
    Location(Vector2 pos);
    /* Set Actionable */
    void setEnemies (std::vector<Entity>* enemies);
    void setPeaceful(std::vector<Entity>* peaceful);
    void setLifeless(std::vector<Entity>* lifeless);
    /* Get Actionable */
    // std::vector<Entity>* getEnemies();
    // std::vector<Entity>* getPeaceful();
    // std::vector<Entity>* getLifeless();

    /* Set Non-actionable */
    void setBackground(std::vector<Props>*  background);
    /* Get Non-actionable */
    // std::vector<Props>* getBackground();

    void draw() override;
};



#endif //LOCATION_H
