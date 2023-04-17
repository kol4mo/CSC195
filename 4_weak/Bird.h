#pragma once
#include "Animal.h"
class Bird : public Animal
{
public:
    eType GetType() override { return eType::Bird; }

    void read(std::ostream& ostr, std::istream& istr) override;
public:
    unsigned int eggs;
    unsigned int wingspan;
};

