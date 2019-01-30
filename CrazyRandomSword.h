/*
 * File:   SimpleHammer.h
 * Author: Ben Karch <bkarch@fsu.edu>
 *
 * Created on January 28, 2019 10:56 AM
 */

#include <string>
#include <stdlib.h>     /* srand, rand */
#include <time.h>       /* time */
#include "Weapon.h"

#ifndef CRAZYRANDOMSWORD_H
#define CRAZYRANDOMSWORD_H

/**
 * Defines the behavior of a simple hammer (hitpoint = 25, armor<30 --> ignore)
 */
class CrazyRandomSword : public Weapon {
public:

    CrazyRandomSword() : Weapon("Crazy Random Sword",0.0) //Calls Weapon(name, hitpoints)
    {
	srand(time(NULL));
	hitPoints = rand() % 93 + 7; //number 7-100
    }

    virtual ~CrazyRandomSword() {};

    virtual double hit(double armor);

};

#endif /* CRAZYRANDOMSWORD_H */
