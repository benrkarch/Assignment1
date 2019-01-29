//
// Created by benrk on 1/29/2019.
//

#include "SimpleHammer.h"

double SimpleHammer::hit(double armor) {
    /* initialize random seed: */
    srand (time(NULL));

    /* generate damage 7 and 100: */
    double damage = rand() % 93 + 7;

    /*generate armor to ignore */
    double ignore = rand() % (armor / 3) + 2;
    if(ignore > (armor/3))
        ignore = armor/3;

    damage = damage - (armor-ignore);
    if (damage < 0) {
        return 0;
    }
    return damage;
}