#include "Hero.h"

// Returns the hero's name
string Hero :: getName() const
{
    return m_name;
}

// Returns current health value
int Hero :: getHealth() const
{
    return m_health;
}

// Returns base power rating
int Hero :: getPower() const
{
    return m_power;
}

// Reduces health by specified damage amount
void Hero :: takeDamage(int damage)
{
    m_health -= damage;  // Subtract damage from health
    
    // Ensure health doesn't go below zero
    if(m_health < 0)
    {
        m_health = 0;  // Set to minimum value
    }
}

// Overloaded + operator - returns sum of both heroes' health
int Hero :: operator+(Hero h)
{
    return int(m_health + h.m_health);
}

// Overloaded > operator - compares power levels
bool Hero :: operator>(Hero h)
{
    // Return true if this hero has higher power
    if(m_power > h.m_power)
    {
        return true;
    }
    else
    {
        return false;
    }
}