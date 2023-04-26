#pragma once
#include "Animal.h"
class Bird : public Animal
{
public:
    eType GetType() override { return eType::Bird; }

    void read(std::ostream& ostr, std::istream& istr) override;
    void write(std::ostream& ostr) override;

    void read(std::ifstream& istr) override;
    void write(std::ofstream& ostr) override;
public:
    unsigned int eggs;
    unsigned int wingspan;
};

