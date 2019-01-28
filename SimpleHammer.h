/*
 * File:   SimpleHammer.h
 * Author: Ben Karch <bkarch@fsu.edu>
 *
 * Created on January 28, 2019 10:56 AM
 */

#include <string>
#include "Weapon.h"

#ifndef SIMPLEHAMMER_H
#define SIMPLEHAMMER_H

/**
 * Defines the behavior of a simple hammer (hitpoint = 25, armor<30 --> ignore)
 */
class SimpleHammer : public Weapon {
public:

    SimpleHammer() : Weapon("Simple hammer",25.0) //Calls Weapon(name, hitpoints) constructor with values Simple hammer and 25.0
    {
    }

    virtual ~SimpleHammer() {};

    virtual double hit(double armor);

};

#endif /* SIMPLEHAMMER_H */
