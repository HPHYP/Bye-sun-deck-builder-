#include "Card.h"

card::card(std::string name, int type, int energy)
{
    cardName = name;
    cardType = type;
    energyCost = energy;
}

std::string card::getCardName() const
{
    return cardName;
}

int card::getCardType() const
{
    return cardType;
}

int card::getEnergyCost() const
{
    return energyCost;
}

bool card::playCard(int& currentEnergy) 
{
    if(currentEnergy >= getEnergyCost())
    {
        currentEnergy -= getEnergyCost();
        return true;
    }
    else
    {
        return false;
    }
}



