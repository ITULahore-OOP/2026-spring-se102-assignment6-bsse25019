#ifndef GUILD_H
#define GUILD_H
using namespace std;
#include <iostream>
#include <iomanip>
#include <string>
#include "Hero.h"

class Guild
{
    private:
    string m_guildName;    // Name of the guild
    Hero* m_roster[15];    // Fixed array of hero pointers (max 15)
    int m_count;           // Current number of members

    public:
    // Constructor - initializes empty guild
    Guild(string name)
    {
        m_guildName = name;  // Set guild name
        
        // Initialize all roster slots to nullptr for safety
        for(int i = 0; i < 15; i++)
        {
            m_roster[i] = nullptr;
        }
        
        m_count = 0;  // Start with zero members
    }
    
    // Destructor - cleans up all dynamically allocated heroes
    ~Guild()
    {
        cout << "The guild " << m_guildName << " has been disbanded!" << endl;
    }

    // Guild management methods
    int calculateTotalGuildPower() const;  // Sum of all members' power
    void displayGuildStats();               // Show guild information
    
    // Operator overload for adding heroes
    void operator += (Hero* h);
    
    // Friend function for output streaming
    friend ostream& operator << (ostream& out, const Guild& g);
    
    // Helper accessors for testing
    int getMemberCount() const { return m_count; }
    Hero* getHero(int index) const { return m_roster[index]; }
};

#endif