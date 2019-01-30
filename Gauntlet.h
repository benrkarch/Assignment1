//
// Created by benrk on 1/30/2019.
//

#ifndef ASSIGNMENT1_GAUNTLET_H
#define ASSIGNMENT1_GAUNTLET_H

/**
 * Defines the behavior of a gauntlet (hitpoint = 100, ignores any armor < 50)
 */
class Gauntlet : public Weapon {
public:

    Gauntlet() : Weapon("Gauntlet",75.0) //Calls Weapon(name, hitpoints) constructor with values Gauntlet and 75.0
    {
    }

    virtual ~Gauntlet() {};

    virtual double hit(double armor);

};

#endif //ASSIGNMENT1_GAUNTLET_H
