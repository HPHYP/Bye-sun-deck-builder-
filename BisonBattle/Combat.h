/**
 * @file Combat.h
 * @brief get that bison
 */
#ifndef Combat_H
#define Combat_H
// #includes go here
#include <string>
#include <vector>
#include "Card.h"
#include "Combatant.h"
#include "Pile.h"




// class goes here


class Combat { 

    public: 
    Combat();
    ~Combat();
    Combat (const Combat&) = delete; 


    // turns 
    void startBattle(); 
    void startPlayerTurn();
    void endPlayerTurn();
    void endBattle(); 

    // player actions 
    void playCard(int handIndex); 
    void playerDamage(int amount); 






    private: 

    Player mPlayer;
    Boss mBoss; 
    std::vector <card*> mAllCards;
    Pile <card*> mDrawpile;
    Pile <card*> mDiscardpile; 

    static const int maxhandsize = 4;   // how many cards you can hold at a time 



};


/**
 * 
 * 

To do:

 Constructor and destructor
 Block copying (= delete)
 Turn functions
 Player action functions


 Functions that cards call
 Getters for the graphics
 Private helpers and member variables


 */

#endif