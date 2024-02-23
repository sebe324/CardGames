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
    public:
        Card(uint16_t cardNameId, uint16_t cardColorId, uint16_t cardPower);

        void setCardNameId(uint16_t id);
        void setCardColorId(uint16_t id);
        void setCardPower(uint16_t x);

        uint16_t getCardNameId();
        uint16_t getCardColorId();
        uint16_t getCardPower();

        std::string getCardName();
        std::string getCardColor();
        void print();

        friend std::ostream& operator<<(std::ostream& os, Card& card);

        static std::vector<std::string> cardNames;
        static std::vector<std::string> cardColors;
};

