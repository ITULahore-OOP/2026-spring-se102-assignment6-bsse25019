#include "Guild.h"
#include "Hero.h"

// Calculates sum of all heroes' power in the guild
int Guild :: calculateTotalGuildPower() const
{
    int total = 0;
    
    // Loop through all members and add their power
    for(int i = 0; i < m_count; i++)
    {
        total += m_roster[i]->getPower();
    }
    
    return total;
}

// Displays formatted guild statistics
void Guild :: displayGuildStats()
{
    cout << "Guild Name: " << m_guildName << endl;
    cout << "Total Members: " << m_count << "/15" << endl;
    cout << "Total Guild Power: " << calculateTotalGuildPower() << endl;
}

// Overloaded += operator - adds a hero to the guild
void Guild :: operator += (Hero* h)
{
    // Check if guild has space
    if(m_count < 15)
    {
        m_roster[m_count] = h;  // Add hero to next available slot
        m_count++;               // Increment member count
    }
    else
    {
        // Guild is at maximum capacity
        cout << "Guild is at full capacity!" << endl;
    }
}

// Overloaded << operator - displays guild information
ostream& operator << (ostream& out, const Guild& g)
{
    out << "Guild: " << g.m_guildName << endl;
    out << "Members: " << g.m_count << endl;
    
    // List all guild members
    for(int i = 0; i < g.m_count; i++)
    {
        cout << "- " << g.m_roster[i]->getName() << " (Power: " << g.m_roster[i]->getPower() << ")" << endl;
    }
    
    return out;
}