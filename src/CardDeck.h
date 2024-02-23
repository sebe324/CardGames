#pragma once

#include "Card.h"
#include <vector>
#include <cstdint>
#include <iostream>

#include <SFML/Graphics.hpp>

class CardDeck : public sf::Drawable
{
    public:
        std::vector<Card*> cards;
    //public:
        bool visibility;

        CardDeck(bool visibility);
        CardDeck(CardDeck& cardDeck);
        ~CardDeck();
        void addCard(const Card* card);
        void fillDeck();
        void removeCard(uint8_t cardId);
        void removeTopCard();
        void addCardFromDeck(const CardDeck& cardDeck, uint8_t cardId);
        void moveCardToDeck(const CardDeck& cardDeck, uint8_t cardId);
        void shuffle();
        void organize();

        friend std::ostream& operator<<(std::ostream& os, CardDeck& card);

        virtual void draw(sf::RenderTarget& target, sf::RenderStates states) const;
};

