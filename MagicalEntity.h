#ifndef MAGICALENTITY_H
#define MAGICALENTITY_H
using namespace std;
#include <iostream>
#include <iomanip>
#include <string>

class MagicalEntity 
{
    private:
    int m_mana;      // Mana pool for casting spells
    int m_spell;     // Spell power rating

    public:
    // Constructor - initializes magical attributes
    MagicalEntity(int mana, int spell)
    {
        m_mana = mana;      // Set mana pool
        m_spell = spell;    // Set spell power
    }

    // Getters for magical attributes
    int getMana() const;
    int getSpellPower() const;
};

#endif