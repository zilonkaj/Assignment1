/*
 * File:   CrazyRandomSword.cpp
 * Author: Joseph <zilonkaj@hotmail.com>
 *
 * Created on January 26, 2019
 */

#include "CrazyRandomSword.h"

double CrazyRandomSword::hit(double armor) {

    int thirdOfArmor = armor / 3;

    // ignoredArmor is random number between 2 - thirdArmor
    int ignoredArmor = rand() % (thirdOfArmor - 1) + 2;

    double damage = hitPoints - ignoredArmor;

    if (damage < 0)
        return 0;
    else
        return damage;
}