/**
 * @file Combatant.h
 * @brief you fighting your bison demons
 */
#ifndef Combatant_H
#define Combatant_H
#include <string>
#include <stdexcept>
#include "Card.h"
#include "Pile.h" 



class card;  //this is where card pointers will be 
class Combat;  //turn loop or something idk

/** when player tries to play card but doesnt have enough energy */

class NotEnoughEnergy : public std::runtime_error("not enough energy!"){

};


/** the main base class for combatent!  */

class Combatant {
    public: 
        Combatant(const std::string& name, int maxhp); 
        virtual ~Combatant() = default;

        void takedamage(int amount); //hp cant go lower then zero, make sure to impliment shield to take damage first
        void heal(int amount); 
        void addsheild(int amount);

        bool isdeafeated() const; 
        std::string getName() const;
        int gethp() const;
        int getmaxhp(); 
        int getsheild() const; 


        private: 
            std::string mName; 
            int mhp;
            int mMaxhp;
            int mshield = 0;
};


class Player : public Combatant {


    public:
        Player(); 

        void startTurn();
        void spendEnergy(int cost);
        void addEnergyPenalty(int amount);
        int getEnergy() const; 



    private: 


        int mEnergy;
        int mMaxenergy=3;
        int mEnergyPenalty = 0;
};



class Boss : public Combatant 

{
public: 
    Boss();

    void addCard(card* newCard);
    void shuffleDeck();
    void takeTurn(Combat& combat); //play top card, move to bottom

private: 
    Pile <card*> mDeck;



};
//energy tracker 

// health tracker 




/**
 * 
 * 

to do:

 class Combat; 
 NotEnoughEnergy exception class
 Combatant base class
 Player class (inherits from Combatant)
 Enemy class (inherits from Combatant, abstract)
 Boss class (inherits from Enemy)
 */

#endif