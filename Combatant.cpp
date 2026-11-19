/**
 * @file combatant.cpp
 * @brief defining stuff for combatant
 */


 #include "Combatant.h" 


 Combatant::Combatant(const std::string& name, int maxhp) : mName(name), mhp(maxhp) mMaxhp(maxhp) {

 }


 // sheild


 void Combatant::takedamage(int amount) {
    int blocked = amount;

    if (mshield <amount) {
        blocked = mshield; //if the shield can block all the damage

    }

    mshield -= blocked;
    mhp -= (amount - blocked); //whatever is left from that is taken from hp

    if (mhp < 0) {
        mhp = 0; 
    }
 }
