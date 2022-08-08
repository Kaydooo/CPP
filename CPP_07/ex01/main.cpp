#include "iter.hpp"

class Animal
{
    public:
        Animal(void){return;}
        ~Animal(){return;};
        virtual void makeSound() const = 0;
};

class Dog : public Animal
{
    public:
        Dog(void){return;}
        void   makeSound() const
        {
            std::cout << "Wooof Woof" << std::endl;
        }
};

class Cat : public Animal
{
    public:
        Cat(void){return;}
        void   makeSound() const
        {
            std::cout << "Meowww" << std::endl;
        }
};


void    callSound(Animal const &an)
{
    an.makeSound();
}

int main( void )
{
    std::string names[5] = {"Moatasem", "Mohamed", "A", "Hus", "Khalid"};
    iter<std::string> (names, 5, printElem);

    int numbers[6] = {1, 2, 3, 4, 5, 6};
    iter<int> (numbers, 5, printElem);

    Cat cats[5];
    iter<Animal> (cats, 5, callSound);

    Dog dogs[5];
    iter<Animal> (dogs, 5, callSound);
    return 0;
}
