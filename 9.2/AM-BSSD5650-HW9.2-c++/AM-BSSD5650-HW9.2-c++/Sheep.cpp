
#include "Animal.cpp"
//sheep
class Sheep : public Animal
{
public:
    Sheep()
    {
        Animaltype = "Sheep is being made";
        std::cout << "sheep is made" << std::endl;
        std::cout << this << std::endl;

    }


    Animal* clone()
    {
        return new Sheep(*this);
    }
};

