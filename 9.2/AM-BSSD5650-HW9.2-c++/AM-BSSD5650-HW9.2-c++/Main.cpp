#include "ClonedFactory.cpp"
#include "Animal.cpp"
Animal* ClonedFactory::sally = 0;
int main()
{
    ClonedFactory::initialize();
    Animal* ClonedSheep;
    ClonedSheep = ClonedFactory::getTypeSheep();
    std::cout << ClonedSheep->getAnimaltype() << std::endl;
    std::cout << "cloned sheep address " << &ClonedSheep << std::endl;
    return 0;
}