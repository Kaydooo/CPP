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
    std::string names[5] = {"Moatasem", "Mohamed", "JaJa", "Hus", "Khalid"};
    iter<std::string> (names, 5, printElem);

    int numbers[6] = {1, 2, 3, 4, 5, 6};
    iter<int> (numbers, 5, printElem);

    Cat cats[5];
    iter<Animal> (cats, 5, callSound);

    Dog dogs[5];
    iter<Animal> (dogs, 5, callSound);
    return 0;
}

/* class Awesome
{
public:
Awesome(void) :_n(42){return;}
int get(void) const {return this->_n;}
private:
    int _n;

};
std::ostream &operator<< (std::ostream &o, Awesome const &rhs){o << rhs.get(); return o;}

template<typename T> void print(T const& x) {std::cout << x << std::endl; return;}

int main()
{
    int tab[] = {0, 1, 2, 3, 4};
    Awesome tab2[5];
    iter<int>(tab, 5, print);
    iter<Awesome>(tab2, 5, print);
    std::string names[5];


} */