#include "MagicalEntity.h"

// Returns the entity's mana pool
int MagicalEntity :: getMana() const
{
    return m_mana;
}

// Returns the entity's spell power
int MagicalEntity :: getSpellPower() const
{
    return m_spell;
}