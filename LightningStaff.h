/*
 * File:   LightningStaff.cpp
 * Author: Joseph <zilonkaj@hotmail.com>
 *
 * Created on January 26, 2019
 */

#ifndef ASSIGNMENT1_LIGHTNINGSTAFF_H
#define ASSIGNMENT1_LIGHTNINGSTAFF_H

#include "Weapon.h"
#include <string>

class LightningStaff : public Weapon {
public:

    LightningStaff() : Weapon("Lightning staff",50)
    {
    }

    virtual ~LightningStaff() {};

    virtual double hit(double armor);
};


#endif //ASSIGNMENT1_LIGHTNINGSTAFF_H
