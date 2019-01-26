/*
 * File:   SimpleHammer.cpp
 * Author: Joseph <zilonkaj@hotmail.com>
 *
 * Created on January 26, 2019
 */

#include "SimpleHammer.h"

// SimpleHammer ignores armor if armor < 30
double SimpleHammer::hit(double armor) {
    if (armor < 30)
        return hitPoints;
    else
    {
        double damage = hitPoints - armor;

        if (damage < 0)
            return 0;
        else
            return damage;
    }
}
