#pragma once

#include "Card.h"
#include <vector>
#include <cstdint>
class CardDeck
{
    private:
        std::vector<Card> cards;
    public:
        CardDeck();
        void addCard(const Card &card);
        void removeCard(uint8_t cardId);
        void removeTopCard();
        void addCardFromDeck(const CardDeck &cardDeck, uint8_t cardId);
        void moveCardToDeck(const CardDeck &cardDeck, uint8_t cardId);
        void shuffle();
        void organize();
};