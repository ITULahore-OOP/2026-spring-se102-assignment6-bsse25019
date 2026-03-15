#include "SpellBlade.h"

// Calculates hybrid damage combining physical and magical power
// Formula: Base Power + Spell Power
int SpellBlade :: calculateHybridDamage()
{
    int hybridDamage;
    hybridDamage = getPower() + getSpellPower();
    return hybridDamage;
}