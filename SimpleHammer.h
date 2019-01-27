/*
 * File:   SimpleHammer.h
 * Author: Joseph <zilonkaj@hotmail.com>
 *
 * Created on January 26, 2019
 */

#ifndef ASSIGNMENT1_SIMPLEHAMMER_H
#define ASSIGNMENT1_SIMPLEHAMMER_H

#include "Weapon.h"
#include <string>

class SimpleHammer : public Weapon {
public:

    SimpleHammer() : Weapon("Simple hammer",25.0)
    {
    }

    virtual ~SimpleHammer() {};

    virtual double hit(double armor);
};


#endif //ASSIGNMENT1_SIMPLEHAMMER_H
