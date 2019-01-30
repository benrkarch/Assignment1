//
// Created by benrk on 1/30/2019.
//


#include "Gauntlet.h"

//define hit for the gauntlet. ignore armore < 50
double SimpleHammer::hit(double armor) {
    double damage = hitpoints;
    if(armor >50)
        damage = damage - armor;
    if (damage < 0) {
        return 0;
    }
    return damage;
}