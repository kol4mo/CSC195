#pragma once
#include "Animal.h"
#include <iostream>
using namespace std;
class Bird : public Animal
{
public:
    eType getType() override { return eType::Bird; }
    void read(std::ostream& ostr, std::istream& istr) override;
    void write(std::ostream& ostr) override;
    void read(std::ifstream& ifstr) override;
    void write(std::ofstream& ofstr) override;
protected:
    int numEggs = 0;
    int wingspan = 0;
};

