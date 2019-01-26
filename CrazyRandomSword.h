/*
 * File:   CrazyRandomSword.h
 * Author: Joseph <zilonkaj@hotmail.com>
 *
 * Created on January 26, 2019
 */

#ifndef ASSIGNMENT1_CRAZYRANDOMSWORD_H
#define ASSIGNMENT1_CRAZYRANDOMSWORD_H

#include "Weapon.h"
#include <string>

class CrazyRandomSword : public Weapon {
public:

    CrazyRandomSword : Weapon("Crazy random sword",0)
    {
    }

    virtual ~SimpleHammer() {};

    virtual double hit(double armor);
};


#endif //ASSIGNMENT1_CRAZYRANDOMSWORD_H
