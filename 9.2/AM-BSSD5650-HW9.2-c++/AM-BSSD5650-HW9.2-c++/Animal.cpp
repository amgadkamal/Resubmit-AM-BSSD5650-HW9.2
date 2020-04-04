


#include <iostream>
#include <string>
#pragma once
class Animal
{
protected:
    std::string Animaltype;
public:
    virtual Animal* clone() = 0;

    std::string getAnimaltype()
    {
        return Animaltype;
    }
};
