#ifndef WARRIOR_H
#define WARRIOR_H
using namespace std;
#include <iostream>
#include <iomanip>
#include <string>
#include "Hero.h"

class Warrior : public Hero
{
    private:
    int m_armor;  // Armor rating for damage reduction

    public:
    // Constructor - passes base attributes to Hero, initializes armor
    Warrior(string name, int health, int power, int armor) : Hero(name, health, power)
    {
        m_armor = armor;  // Set armor rating
    }

    // Getter for armor value
    int getArmor();
    
    // Warrior specific ability calculates health with armor bonus
    int calculateEffectiveHealth();
};

#endif