#pragma once
#include "Animal.h"
#include <iostream>
using namespace std;
class Fish : public Animal
{
public:
    eType getType() override { return eType::Fish; }
    void read(std::ostream& ostr, std::istream& istr) override;
    void write(std::ostream& ostr) override;
    void read(std::ifstream& ifstr) override;
    void write(std::ofstream& ofstr) override;

protected:
    int numFins = 0;
    int numTeeth = 0;
    string habitat = "";
};

