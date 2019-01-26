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
    else if (armor > 0)
        damage = (hitPoints - armor) * 2;   // Double damage on armor < 10
    else
        damage = 1000;                      // Kills if no armor


    if (damage < 0)
        return 0;
    else
        return damage;
}
