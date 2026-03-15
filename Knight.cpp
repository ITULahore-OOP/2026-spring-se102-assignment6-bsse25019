#include "Knight.h"
#include "Warrior.h"

// Returns the knight's charge attack bonus
int Knight :: getChargeBonus() const
{
    return m_bonus;
}

// Calculates burst damage during a charge
// Formula: Base Power + Charge Bonus
int Knight :: calculateBurstDamage()
{
    int burstDamage;
    burstDamage = getPower() + m_bonus;
    return burstDamage;
}