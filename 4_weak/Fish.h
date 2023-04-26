#pragma once
#include "Animal.h"
class Fish : public Animal
{
public:
    eType GetType() override { return eType::Fish; }

    void read(std::ostream& ostr, std::istream& istr) override;
    void write(std::ostream& ostr) override;

    void read(std::ifstream& istr) override;
    void write(std::ofstream& ostr) override;
protected:
    unsigned int fins;
    unsigned int teeth;
    string habitat;
};

