#include <iostream>
#include <string>
#include "Hero.h"
#include "Warrior.h"
#include "Knight.h"
#include "MagicalEntity.h"
#include "SpellBlade.h"
#include "Guild.h"

using namespace std;

// function to demonstrate inheritance hierarchy
void demonstrateInheritance()
{
    cout << "\n--- INHERITANCE DEMONSTRATION ---\n";
    cout << "1. Single Inheritance: Hero -> Warrior\n";
    cout << "2. Multilevel Inheritance: Hero -> Warrior -> Knight\n";
    cout << "3. Multiple Inheritance: SpellBlade (Warrior + MagicalEntity)\n";

    // Creating objects to show inheritance
    Warrior w("TestWarrior", 100, 50, 10);
    Knight k("TestKnight", 150, 70, 20, 30);
    SpellBlade s("TestSpellBlade", 120, 60, 15, 80, 40);

    cout << "\nAll objects created successfully!\n";
}

// Simple function to demonstrate operator overloading
void demonstrateOperators()
{
    cout << "\n--- OPERATOR OVERLOADING DEMONSTRATION ---\n";

    Hero hero1("Hero Strong", 100, 80);
    Hero hero2("Hero Weak", 100, 40);

    // Demonstrate operator>
    cout << hero1.getName() << " (Power: " << hero1.getPower() << ")\n";
    cout << hero2.getName() << " (Power: " << hero2.getPower() << ")\n";

    if (hero1 > hero2)
    {
        cout << "Result: " << hero1.getName() << " is stronger (operator>)\n";
    }
    else
    {
        cout << "Result: " << hero2.getName() << " is stronger (operator>)\n";
    }

    // Demonstrate operator+
    int totalHealth = hero1 + hero2;
    cout << "Combined health: " << totalHealth << " (operator+)\n";
}

// Simple function to demonstrate combat

void demonstrateCombat()
{
    cout << "\n--- COMBAT DEMONSTRATION ---\n";

    Hero warrior("Warrior", 100, 50);
    cout << warrior.getName() << " initial health: " << warrior.getHealth() << "\n";

    warrior.takeDamage(30);
    cout << "After taking 30 damage: " << warrior.getHealth() << "\n";

    warrior.takeDamage(80);
    cout << "After taking 80 damage: " << warrior.getHealth() << " (cannot go below 0)\n";
}

// Simple function to demonstrate guild functionality

void demonstrateGuild()
{
    cout << "\n--- GUILD DEMONSTRATION ---\n";

    // Create guild
    Guild myGuild("Stormwind Guardians");
    cout << "Guild created: Stormwind Guardians\n";

    // Create heroes
    Hero *aragorn = new Hero("Aragorn", 120, 75);
    Hero *legolas = new Hero("Legolas", 90, 85);
    Warrior *gimli = new Warrior("Gimli", 150, 60, 20);
    Knight *arthur = new Knight("Arthur", 180, 80, 25, 40);
    SpellBlade *eldrin = new SpellBlade("Eldrin", 140, 70, 15, 100, 45);

    // Add to guild using += operator
    cout << "\nRecruiting heroes...\n";
    myGuild += aragorn;
    myGuild += legolas;
    myGuild += gimli;
    myGuild += arthur;
    myGuild += eldrin;

    // Display using << operator
    cout << "\n"
         << myGuild;

    // Show specialized abilities
    cout << "\n--- Special Abilities ---\n";
    cout << gimli->getName() << " (Warrior): " << gimli->calculateEffectiveHealth() << " effective health\n";
    cout << arthur->getName() << " (Knight): " << arthur->calculateBurstDamage() << " burst damage\n";
    cout << eldrin->getName() << " (SpellBlade): " << eldrin->calculateHybridDamage() << " hybrid damage\n";

    // Show guild power
    cout << "\nTotal Guild Power: " << myGuild.calculateTotalGuildPower() << "\n";

    cout << "\nNote: Guild destructor will automatically delete all heroes\n";
}

// Simple function to test capacity limit

void testGuildCapacity()
{
    cout << "\n--- GUILD CAPACITY TEST ---\n";

    Guild smallGuild("Small Guild");
    Hero filler("Filler Hero", 50, 10);

    cout << "Adding 16 heroes to a guild (max 15)...\n";

    for (int i = 0; i < 16; i++)
    {
        cout << "Adding hero " << (i + 1) << "... ";
        smallGuild += &filler;
    }
}

// Main function simple menu driven interface

int main()
{
    int choice;
    bool running = true;

    cout << "\n=========================================\n";
    cout << "   FANTASY RPG GUILD SYSTEM\n";
    cout << "   Assignment 6 - OOP Concepts\n";
    cout << "=========================================\n";

    while (running)
    {
        cout << "\n--- MAIN MENU ---\n";
        cout << "1. Demonstrate Inheritance\n";
        cout << "2. Demonstrate Operator Overloading\n";
        cout << "3. Demonstrate Combat System\n";
        cout << "4. Demonstrate Guild System\n";
        cout << "5. Test Guild Capacity\n";
        cout << "6. Run Complete Demo\n";
        cout << "7. Exit\n";
        cout << "Enter your choice: ";

        cin >> choice;

        switch (choice)
        {
        case 1:
            demonstrateInheritance();
            break;

        case 2:
            demonstrateOperators();
            break;

        case 3:
            demonstrateCombat();
            break;

        case 4:
            demonstrateGuild();
            break;

        case 5:
            testGuildCapacity();
            break;

        case 6:
        {
            cout << "\n========== COMPLETE DEMONSTRATION ==========\n";
            demonstrateInheritance();
            demonstrateOperators();
            demonstrateCombat();
            demonstrateGuild();
            testGuildCapacity();
            cout << "\n========== DEMONSTRATION COMPLETE ==========\n";
            break;
        }

        case 7:
            cout << "\nExiting program. Goodbye!\n";
            running = false;
            break;

        default:
            cout << "\nInvalid choice! Please try again.\n";
        }

        if (running && choice != 7)
        {
            cout << "\nPress Enter to continue...";
            cin.ignore();
            cin.get();
        }
    }

    return 0;
}