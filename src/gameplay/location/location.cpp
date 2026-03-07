//
// Created by k3rnel1x on 07.03.2026.
//

#include "location.h"

void Location::setEnemies(std::vector<Entity>* enemies)
{
    for (int i = 0; i < enemies->size(); i++)
        enemies->at(i).setMap(this);

    this->enemies = enemies;
}

void Location::setPeaceful(std::vector<Entity>* peaceful)
{
    for (int i = 0; i < peaceful->size(); i++)
        peaceful->at(i).setMap(this);

    this->peaceful = peaceful;
}

void Location::setLifeless(std::vector<Entity>* lifeless)
{
    for (int i = 0; i < lifeless->size(); i++)
        lifeless->at(i).setMap(this);

    this->lifeless = lifeless;
}

void Location::setBackground(std::vector<Props>* background)
{
    for (int i = 0; i < background->size(); i++)
        background->at(i).setMap(this);

    this->background = background;
}

void Location::draw()
{
    for (int i = 0; i < background->size(); i++)
        background->at(i).draw();

    for (int i = 0; i < lifeless->size(); i++)
        lifeless->at(i).draw();

    for (int i = 0; i < peaceful->size(); i++)
        peaceful->at(i).draw();

    for (int i = 0; i < enemies->size(); i++)
        enemies->at(i).draw();
}
