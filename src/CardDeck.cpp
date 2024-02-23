#include "CardDeck.h"
#include <random>

int generateRandomInt(int min, int max) {
    std::random_device rd;   // Get a random seed from the operating system
    std::mt19937 mt(rd());  // Use the Mersenne Twister 19937 generator
    std::uniform_int_distribution<int> dist(min, max); // Distribute results between min and max inclusive

    return dist(mt);  // Generate a random integer
}

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
        addCard(card);
    }
}

CardDeck::~CardDeck()
{
    for(auto c : cards) delete c;
}

void CardDeck::addCard(Card* card)
{
    cards.push_back(card);
}

void CardDeck::fillDeck()
{
    for(int n=0; n<Card::cardNames.size(); n++)
        for(int c=0; c<Card::cardColors.size(); c++)
            cards.push_back(new Card(n,c,0));
}

void CardDeck::removeCard(uint8_t index)
{
    cards.erase(cards.begin()+index);
}

void CardDeck::removeTopCard()
{
    cards.erase(cards.end()-1);
}

void CardDeck::addCardFromDeck(CardDeck &cardDeck, uint8_t cardId)
{
    addCard(cardDeck.cards[cardId]);
    cardDeck.removeCard(cardId);
}

void CardDeck::moveCardToDeck(CardDeck &cardDeck, uint8_t cardId)
{

}

void CardDeck::shuffle()
{
    std::vector<Card*> tmpCards;
    uint64_t s = cards.size();
    for(size_t i = 0; i < s; i++)
    {
        int index = generateRandomInt(0,cards.size()-1);
        tmpCards.push_back(cards[index]);
        removeCard(index);
    }

    cards = std::vector<Card*>(tmpCards);
    
}

bool cmp(Card const *const a, Card const *const b)
{   
    if (a->getCardNameId() < b->getCardNameId()) return true;
    else if (a->getCardNameId() == b->getCardNameId()) return a->getCardColorId() < b->getCardColorId() ? true : false;
    else return false;
}


void CardDeck::organize()
{
    std::sort(cards.begin(), cards.end(), &cmp);
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
