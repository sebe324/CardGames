#include "Card.h"

std::vector<std::string> Card::cardNames={"Ace","Two","Three","Four","Five","Six","Seven","Eight","Nine","Ten","Jack","Queen","King"};

std::vector<std::string> Card::cardColors={"Hearts", "Diamonds", "Spades", "Clubs"};

Card::Card()
{
    m_cardNameId=0;
    m_cardColorId=0;
    m_cardPower=0;
}
Card::Card(uint16_t cardNameId, uint16_t cardColorId, uint16_t cardPower)
{
    m_cardNameId=cardNameId;
    m_cardColorId=cardColorId;
    m_cardPower=cardPower;
}

Card::~Card()
{
    //std::cout<<"DELETED "<<*this<<'\n';
}
void Card::setCardNameId(uint16_t id)
{
    if(id > 0 && id < cardNames.size())
        m_cardNameId = id;
}

void Card::setCardColorId(uint16_t id)
{
    if(id > 0 && id < cardColors.size())
        m_cardColorId = id;
}

void Card::setCardPower(uint16_t x)
{
    if(x > 0) m_cardPower=x;
}

uint16_t Card::getCardNameId()
{
    return m_cardNameId;
}

uint16_t Card::getCardColorId()
{
    return m_cardColorId;
}

uint16_t Card::getCardPower()
{
    return m_cardPower;
}

std::string Card::getCardName()
{
    return cardNames[m_cardNameId];
}

std::string Card::getCardColor()
{
    return cardColors[m_cardColorId];
}
void Card::print()
{
    std::cout<<cardNames[m_cardNameId]<<","<<cardColors[m_cardColorId]<<","<<m_cardPower<<'\n';
}

std::ostream& operator<<(std::ostream& os, Card& card)
{
    os<<Card::cardNames[card.m_cardNameId]<<","<<Card::cardColors[card.m_cardColorId]<<","<<card.m_cardPower;
    return os;
}
