//
// Created by benrk on 1/29/2019.
//

#include "SimpleHammer.h"

double SimpleHammer::hit(double armor) {
    double damage = hitPoints;
    if(armor >= 30)
        damage = damage - armor;
    if (damage < 0) {
        return 0;
    }
    return damage;
}