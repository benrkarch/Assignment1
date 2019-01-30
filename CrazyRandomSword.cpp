//
// Created by benrk on 1/29/2019.
//

#include "CrazyRandomSword.h"

double CrazyRandomSword::hit(double armor) {
    /* initialize random seed: */
    srand (time(NULL));

    /* generate damage 7 and 100: */
    double damage = hitPoints;

    /*generate armor to ignore */
    double ignore = 0.0;
    if(armor >=2)
        ignore = rand() % ((int)(armor / 3) - 2) + 2;

    damage = damage - (armor-ignore);
    if (damage < 0) {
        return 0;
    }
    return damage;
}
