#pragma once
#include "Animal.h"
class Fish : public Animal
{
public:
    eType GetType() override { return eType::Fish; }

    void read(std::ostream& ostr, std::istream& istr) override;
public:
    unsigned int fins;
    unsigned int teeth;
    string habitat;
};

