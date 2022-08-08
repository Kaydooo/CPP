#include "Array.hpp"

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

int main() 
{
    /* Empty Array */
    std::cout << "Empty Array" << std::endl;

    try
    {
        Array<int> intArray;
        std::cout << intArray.size() << std::endl;
        std::cout << intArray[0] << std::endl;
    }
    catch (std::exception &e)
    {
        std::cout << "Catch 1 : " << e.what() <<  std::endl;
    }

    /*  Int Array */
    std::cout << "Int Array" << std::endl;

    try
    {
        Array<int> intArray2(33);
        std::cout << intArray2.size() << std::endl;
        for(unsigned int i = 0; i < 33 ; i++)
        {
            intArray2[i] = i;
        }
        std::cout << intArray2[32] << std::endl;
    }
    catch (std::exception &e)
    {
        std::cout << "Catch 2 : " << e.what() <<  std::endl;
    }

    /* Class Array */
    std::cout << "Class (Cat) Array" << std::endl;
     
    try
    {
        Array<Cat> cats(14);
        for(unsigned int i = 0; i < 14; i++)
        {
            cats[i].makeSound();
        }
    }
    catch (std::exception &e)
    {
        std::cout << "Catch 3 : " << e.what() <<  std::endl;
    }

    return 0;
}
