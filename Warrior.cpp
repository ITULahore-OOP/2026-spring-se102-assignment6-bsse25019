#include "Warrior.h"

// Returns the warrior's armor rating
int Warrior :: getArmor()
{
    return m_armor;
}

// Calculates effective health including armor bonus
// Formula: Base Health + (Armor Rating × 2)
int Warrior :: calculateEffectiveHealth()
{
    int effectiveHealth = getHealth() + (m_armor * 2);
    return effectiveHealth;
}