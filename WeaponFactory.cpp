/* 
 * File:   WeaponFactory.cpp
 * Author: Javier <jrescobara@gmail.com>
 *  
 */ 

#include <string>
#include <stddef.h> 
#include "WeaponFactory.h"
#include "CommonSword.cpp"
#include "CommonSpear.cpp"
#include "SimpleHammer.cpp"
#include "CrazyRandomSword.cpp"
#include "Gauntlet.cpp"

WeaponFactory* WeaponFactory::instance = NULL;

WeaponFactory * WeaponFactory::getInstance() {
    if (!instance) {
        instance = new WeaponFactory();
    }
    return instance;
}

Weapon * WeaponFactory::getWeapon(std::string name) {
    if (name.compare("sword") == 0) {
        return new CommonSword();
    }
    
    if (name.compare("spear") == 0) {
        return new CommonSpear();
    }

    if(name.compare("simple hammer") == 0) {
        return new SimpleHammer();
    }

    if(name.compare("crazy random sword") == 0){
        return new CrazyRandomSword();
    }

    if(name.compare("gauntlet") == 0){
        return new Gauntlet();
    }

    throw "Invalid weapon";
}