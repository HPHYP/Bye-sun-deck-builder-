/**
 * @file card.h
 * @brief the caaaardssss
 */
#ifndef CARD_H
#define CARD_H
#include <string>
#include <iostream>

class card
{
private:
    std::string cardName;
    int cardType;
    int energyCost;

public:
    card(std::string name, int type, int energy);

    std::string getCardName() const;
    int getCardType() const; //Will return 1(attack), 2(defend), or 3(heal)
    int getEnergyCost() const;

    bool playCard(int& currentEnergy);
};

#endif