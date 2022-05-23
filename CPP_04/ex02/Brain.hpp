#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <iostream>

#define RED "\033[0;31m"
#define GREEN "\033[1;32m"
#define CYAN "\033[0;36m"
#define YELLOW "\033[1;33m"
#define RESET "\033[0m"

class Brain
{
public:
	

// ----------------------------- Constructors ------------------------------ //
	Brain();	// Default Constructor
	Brain(std::string in_ideas);	// Fields Constructor
	Brain(const Brain& c);	// Copy Constructor

// ------------------------------ Destructor ------------------------------- //
	~Brain();	// Destructor

// ------------------------------- Operators ------------------------------- //
	Brain & operator=(const Brain& a);
	// Copy Assignement Operator

// --------------------------- Getters && Setters -------------------------- //
	std::string get_ideas(int index) const;
	void set_ideas(std::string input, int index);
	

// --------------------------------- Methods ------------------------------- //

private:
	std::string ideas[100];

};

#endif /* BRAIN_HPP */
