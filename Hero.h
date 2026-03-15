#ifndef HERO_H
#define HERO_H
using namespace std;
#include <iostream>
#include <iomanip>
#include <string>

class Hero
{
    private:
    // Core hero attributes (encapsulated for data protection)
    string m_name;      // Character's display name
    int m_health;       // Current health points
    int m_power;        // Base attack power
    string m_role;      // Character class/type

    public:
    // Constructor with default values
    Hero(string name="", int health=0, int power=0)
    {
        m_name = name;      // Initialize hero name
        m_health = health;  // Set initial health
        m_power = power;    // Set base power
    }
    
    // Destructor
    ~Hero()
    {

    }
    
    // Getter methods for accessing private data
    string getName() const;
    int getHealth() const;
    int getPower() const;
    
    // Combat method applies damage to hero
    void takeDamage(int damage);
    
    // Operator overloads for hero interactions
    int operator+(Hero h);      // Combines health of two heroes
    bool operator>(Hero h);     // Compares power levels
};

#endif