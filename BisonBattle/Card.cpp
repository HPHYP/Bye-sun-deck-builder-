#include "Card.h"
#include <vector>
#include <iostream>

card::card(std::string name, int type, int energy, int level)
{
    cardName = name;
    cardType = type;
    energyCost = energy;
    cardLevel = level;
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

int card::getCardLevel() const
{
    return cardLevel;
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

attackCard::attackCard(std::string name, int energy, int level) : card(name, 1, energy, level)//attackCard type = 1, so that is why we pass 1.
{

}
int attackCard::useCard(int playerLevel)
{
    return getCardLevel() + playerLevel;
}

defendCard::defendCard(std::string name, int energy, int level) : card(name, 2, energy, level)//defendCard type = 2, so that is why we pass 2.
{

}
int defendCard::useCard(int playerLevel)
{
    return getCardLevel() + playerLevel;
}

healCard::healCard(std::string name, int energy, int level) : card(name, 3, energy, level)//healCard type = 3, so that is why we pass 3.
{

}

int healCard::useCard(int playerLevel)
{
    return getCardLevel() + playerLevel;
}

void testing() // Had ChatGPT create a test with three examples, and and example player level.
{
    attackCard sword("Sword", 2, 3);
    defendCard shield("Shield", 1, 2);
    healCard potion("Potion", 2, 4);

    std::vector<card*> cards;

    cards.push_back(&sword);
    cards.push_back(&shield);
    cards.push_back(&potion);

    int playerLevel = 2;

    for(size_t i = 0; i < cards.size(); i++)
    {
        int effect = cards[i]->useCard(playerLevel);
        std::cout << cards[i]->getCardName() << ": " << effect << std::endl;
    }
}

