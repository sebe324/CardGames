#include "CardDeck.h"

CardDeck::CardDeck(bool visibility)
{
    cards = std::vector<Card*>();
    this->visibility=visibility;
}

CardDeck::CardDeck(CardDeck& cardDeck)
{
    cards = std::vector<Card*>();
    for(auto c : cardDeck.cards)
    {
        Card* card = new Card(c->getCardNameId(), c->getCardColorId(), c->getCardPower());
        cards.push_back(card);
    }
}

CardDeck::~CardDeck()
{
    for(auto c : cards) delete c;
}

void CardDeck::addCard(const Card *card)
{

}

void CardDeck::fillDeck()
{
    for(int n=0; n<Card::cardNames.size(); n++)
        for(int c=0; c<Card::cardColors.size(); c++)
            cards.push_back(new Card(n,c,0));
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

void CardDeck::draw(sf::RenderTarget& target, sf::RenderStates states) const
{

}