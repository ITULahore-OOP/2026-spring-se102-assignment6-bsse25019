#ifndef KNIGHT_H
#define KNIGHT_H
using namespace std;
#include <iostream>
#include <iomanip>
#include <string>
#include "Warrior.h"

class Knight : public Warrior
{
    private:
    int m_bonus;  // Charge attack bonus damage

    public:
    // Constructor - passes attributes to Warrior, initializes charge bonus
    Knight(string name, int health, int power, int armor, int bonus) : Warrior(name, health, power, armor)
    {
        m_bonus = bonus;  // Set charge bonus
    }

    // Getter for charge bonus
    int getChargeBonus() const;
    
    // Knight-specific ability - calculates burst damage during charge
    int calculateBurstDamage();
};

#endif