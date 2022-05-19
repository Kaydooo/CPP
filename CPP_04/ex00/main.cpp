#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"

int main()
{
const Animal* meta = new Animal();
const Animal* j = new Dog();
const Animal* i = new Cat();
Dog dog("DOGTEST");
std::cout << j->get_Type() << " " << std::endl;
std::cout << i->get_Type() << " " << std::endl;
i->makeSound(); //will output the cat sound!
j->makeSound();
dog.makeSound();
meta->makeSound();
const WrongAnimal* wc = new WrongCat();
wc->makeSound();
/* const Animal* meta = new Animal();
const Animal* j = new Dog();
Animal *cat = new Cat();
Dog Anim2("LOLDOG");lscd

Dog dog(Anim2);
const WrongAnimal* i = new WrongCat();
std::cout << j->get_Type() << " " << std::endl;
std::cout << i->get_Type() << " " << std::endl;
i->makeSound(); //will output the cat sound!
j->makeSound();
meta->makeSound();
cat->makeSound();
dog.makeSound();
std::cout << dog.get_Type() << " " << std::endl;
std::cout << meta->get_Type() << " " << std::endl;
std::cout << cat->get_Type() << " " << std::endl; */
delete i;
delete meta;
delete j;
delete wc;

return 0;
}