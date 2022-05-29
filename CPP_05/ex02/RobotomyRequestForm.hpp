#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

# include <iostream>
# include <fstream>
# include <exception>
# include "Form.hpp"


#define RED "\033[0;31m"
#define GREEN "\033[1;32m"
#define CYAN "\033[0;36m"
#define YELLOW "\033[1;33m"
#define RESET "\033[0m"

#define checkStatus(X)  ((X) == (true) ? ("Signed") : ("Unsigned"))

class RobotomyRequestForm : public Form
{
public:

// ----------------------------- Constructors ------------------------------ //
	RobotomyRequestForm(std::string);	// Fields Constructor
	RobotomyRequestForm(const RobotomyRequestForm&);	// Copy Constructor

// ------------------------------ Destructor ------------------------------- //
	virtual ~RobotomyRequestForm();	// Destructor 

// ------------------------------- Operators ------------------------------- //
	RobotomyRequestForm & operator=(const RobotomyRequestForm&);
	// Copy Assignement Operator

// --------------------------- Getters && Setters -------------------------- //
	
// --------------------------------- Methods ------------------------------- //
void				execute(Bureaucrat const & executor) const;

// --------------------------------- Exception class ------------------------------- //

private:
	std::string const	target;
	RobotomyRequestForm();	// Default Constructor

};
std::ostream & operator<<(std::ostream& lhs, RobotomyRequestForm const &rhs);

#endif /* ROBOTOMYREQUESTFORM_HPP */
