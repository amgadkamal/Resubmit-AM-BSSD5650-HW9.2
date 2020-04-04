//factory
#include "Animal.cpp"
#include "Sheep.cpp"
class ClonedFactory
{
    static Animal* sally;

public:
    static void  initialize()
    {
        sally = new Sheep();
    }

    static Animal* getTypeSheep()
    {
        return sally->clone();
    }
};

