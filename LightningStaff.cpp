/*
 * File:   LightningStaff.cpp
 * Author: Joseph <zilonkaj@hotmail.com>
 *
 * Created on January 26, 2019
 */

#include "LightningStaff.h"

double LightningStaff::hit(double armor) {

    double damage;

    if (armor > 10)
        damage = hitPoints - armor;
    else
        damage = (hitPoints * 2) - armor;   // Double damage on armor < 10


    if (damage < 0)
        return 0;
    else
        return damage;
}
