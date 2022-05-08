#include "Brain.hpp"

// ----------------------------- Constructors ------------------------------ //
Brain::Brain()
{
	_BRAIN_AUTO(32, "Default Constructor");
}

Brain::Brain(const Brain& c)
{
	for(int i = 0; i < 100 ; i++)
		ideas[i] = c.get_ideas(i);
	_BRAIN_AUTO(32, "Copy Constructor");
}


// ------------------------------ Destructor ------------------------------- //
Brain::~Brain()
{
	_BRAIN_AUTO(31, "Destructor called");
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

