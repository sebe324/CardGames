#include "CardDeck.h"

CardDeck::CardDeck(bool visibility)
{
    cards = std::vector<Card*>();
    this->visibility=visibility;
    cards.push_back(new Card(1,1,1));
    cards.push_back(new Card(1,1,1));
    cards.push_back(new Card(1,1,1));
}

CardDeck::~CardDeck()
{
    for(auto c : cards) delete c;
}

void CardDeck::addCard(const Card *card)
{

}

void CardDeck::removeCard(uint8_t cardId)
{

}

void CardDeck::removeTopCard()
{

}

void CardDeck::addCardFromDeck(const CardDeck &cardDeck, uint8_t cardId)
{

}

void CardDeck::moveCardToDeck(const CardDeck &cardDeck, uint8_t cardId)
{

}

void CardDeck::shuffle()
{

}

void CardDeck::organize()
{

}

std::ostream& operator<<(std::ostream& os, CardDeck& cardDeck)
{
    for(auto c : cardDeck.cards)
        os<<(*c)<<'\n';
    return os;
}