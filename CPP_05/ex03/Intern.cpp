#include "Intern.hpp"

// ----------------------------- Constructors ------------------------------ //
Intern::Intern()
{
	std::cout << GREEN << "Default Constructor Called Intern()" << RESET << std::endl;
}

Intern::Intern(const Intern& c)
{
	*this = c;
	std::cout << GREEN << "Copy Constructor Called Intern()" << RESET << std::endl;
}

// ------------------------------ Destructor ------------------------------- //
Intern::~Intern()
{
	std::cout << RED << "Destructor Called ~Intern()" << RESET << std::endl;
}
// ------------------------------- Operators ------------------------------- //

Intern & Intern::operator=(const Intern& c)
{
	(void)c;
	std::cout << GREEN << "Copy Assignment Operator Intern()" << RESET << std::endl;
	return *this;
}


// --------------------------- Getters && Setters -------------------------- //

// --------------------------------- Methods ------------------------------- //
const char*	   Intern::FormNotFoundException::what() const  throw() {return ("Form Not Found!");}
Form*		Intern::makeS(std::string target){ return new ShrubberyCreationForm(target);}
Form*		Intern::makeR(std::string target){ return new RobotomyRequestForm(target);}
Form*		Intern::makeP(std::string target){ return new PresidentialPardonForm(target);}

Form* 		Intern::makeForm(std::string n, std::string t)
{
	std::string formName[3] = {"Shrubbery Creation", "Robotomy Request", "Presidential PardonForm"};
	func funcPointers[3] = {&Intern::makeS, &Intern::makeR, &Intern::makeP};
	try
	{
		for(int i = 0; i < 3; i++)
		{
			if(formName[i] == n)
				return(	(this->*funcPointers[i])(t));
		}
		throw FormNotFoundException();
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
		return NULL;
	}
	
}
