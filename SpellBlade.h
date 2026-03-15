#ifndef SPELLBLADE_H
#define SPELLBLADE_H
using namespace std;
#include <iostream>
#include <iomanip>
#include <string>
#include "Warrior.h"
#include "MagicalEntity.h"

class SpellBlade : public Warrior, public MagicalEntity
{
    public:
    // Constructor - initializes both parent classes
    SpellBlade(string name, int health, int power, int armor, int mana, int spell) 
        : Warrior(name, health, power, armor), MagicalEntity(mana, spell)
    {
        // Both parent constructors handle initialization
    }
    
    // SpellBlade-specific ability - combines physical and magical damage
    int calculateHybridDamage();
};

#endif