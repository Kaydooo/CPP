#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"

int main()
{
	Animal *animals[10];
	Animal *dogggg = new Dog();
	dogggg->makeSound();
	for(int i = 0; i < 10; i++)
	{
		if(i < 5)
			animals[i] = new Cat();
		else
			animals[i] = new Dog();
	}
	for(int i = 0; i < 10; i++)
	{
		animals[i]->makeSound();
	}
	for(int i = 0; i < 10; i++)
	{
		delete animals[i];
	}
/* const Animal* meta = new Animal();
const Animal* j = new Dog();
Animal *cat = new Cat();
Dog Anim2("LOLDOG");
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

	return 0;
}