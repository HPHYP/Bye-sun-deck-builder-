/**
 * @file card.h
 * @brief the caaaardssss
 */
#ifndef CARD_H
#define CARD_H
#include <string>
//#include <iostream>

class card
{
private:
    std::string cardName;
    int cardType;
    int energyCost;
    int cardLevel;

public:
    card(std::string name, int type, int energy, int level);
    virtual ~card() = default;

    std::string getCardName() const;
    int getCardType() const; //Will return 1(attack), 2(defend), or 3(heal)
    int getEnergyCost() const;
    int getCardLevel() const;

    bool playCard(int& currentEnergy);

    virtual int useCard(int playerLevel) = 0;
};

class attackCard : public card
{
public:
    attackCard(std::string name, int energy, int level);
    int useCard(int playerLevel) override;
};

class defendCard : public card
{
public:
    defendCard(std::string name, int energy, int level);
    int useCard(int playerLevel) override;
};

class healCard : public card
{
public:
    healCard(std::string name, int energy, int level);
    int useCard(int playerLevel) override;
};
#endif