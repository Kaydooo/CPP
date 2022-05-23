#include "Brain.hpp"

// ----------------------------- Constructors ------------------------------ //
Brain::Brain()
{
	std::cout << GREEN << "Default Constructor Called Brain()" << RESET << std::endl;

}

Brain::Brain(const Brain& c)
{
	for(int i = 0; i < 100 ; i++)
		ideas[i] = c.get_ideas(i);
	std::cout << GREEN << "Copy Constructor Called Brain(const Brain& c)" << RESET << std::endl;
}


// ------------------------------ Destructor ------------------------------- //
Brain::~Brain()
{
	std::cout << RED << "Destructor Called ~Brain()" << RESET << std::endl;

}
// ------------------------------- Operators ------------------------------- //

Brain & Brain::operator=(const Brain& c)
{
	for(int i = 0; i < 100 ; i++)
		ideas[i] = c.get_ideas(i);
	return *this;
}

// --------------------------- Getters && Setters -------------------------- //
std::string Brain::get_ideas(int index) const{ 
	if(index < 0 || index >= 100) 
	{
		std::cout << "get_ideas : Wrong Index !" << std::endl;
		return (NULL);
	}
	return ideas[index]; 	}
void Brain::set_ideas(std::string input, int index){
	if(index < 0 || index >= 100) 
		std::cout << "set_ideas : Wrong Index !" << std::endl;
	else
		ideas[index] = input;
 }



// --------------------------------- Methods ------------------------------- //

