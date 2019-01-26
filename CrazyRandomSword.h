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
#include <cstdlib>
#include <ctime>

class CrazyRandomSword : public Weapon {
public:

    // Assign hitPoints to temporary value of 0 since real value will be calculated in constructor
    CrazyRandomSword() : Weapon("Crazy random sword",0)
    {
        /*  Random number generation method taken from Bob Myer's notes:
            https://www.cs.fsu.edu/~myers/c++/notes/rand.html
        */

        srand(time(0));                                     // seed random number generator
        hitPoints = rand() % 94 + 7;       // set hitPoints to random number between 7 - 100
    }

    virtual ~CrazyRandomSword() {};

    virtual double hit(double armor);
};


#endif //ASSIGNMENT1_CRAZYRANDOMSWORD_H
