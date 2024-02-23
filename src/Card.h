#pragma once

#include <string>
#include <cstdint>
#include <vector>
#include <iostream>

class Card
{
    private:
        uint16_t m_cardNameId;
        uint16_t m_cardColorId;
        uint16_t m_cardPower;
        uint16_t id;
    public:
        Card();
        Card(uint16_t cardNameId, uint16_t cardColorId, uint16_t cardPower);
        ~Card();
        void setCardNameId(uint16_t id);
        void setCardColorId(uint16_t id);
        void setCardPower(uint16_t x);

        uint16_t getCardNameId() const;
        uint16_t getCardColorId() const;
        uint16_t getCardPower() const;

        std::string getCardName() const;
        std::string getCardColor() const;
        void print();

        friend std::ostream& operator<<(std::ostream& os, Card& card);

        static std::vector<std::string> cardNames;
        static std::vector<std::string> cardColors;
};

