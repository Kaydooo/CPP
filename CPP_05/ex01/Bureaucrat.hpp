#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
# include <exception>
# include "Form.hpp"

#define RED "\033[0;31m"
#define GREEN "\033[1;32m"
#define CYAN "\033[0;36m"
#define YELLOW "\033[1;33m"
#define RESET "\033[0m"
class Form;
class Bureaucrat
{
public:
	
// ----------------------------- Constructors ------------------------------ //
	Bureaucrat();	// Default Constructor
	Bureaucrat(std::string, int);	// Fields Constructor
	Bureaucrat(const Bureaucrat&);	// Copy Constructor

// ------------------------------ Destructor ------------------------------- //
	virtual ~Bureaucrat();	// Destructor

// ------------------------------- Operators ------------------------------- //
	Bureaucrat & operator=(const Bureaucrat&);
	// Copy Assignement Operator

// --------------------------- Getters && Setters -------------------------- //
	std::string  const getName() const;
	int getGrade() const;
	void setName(std::string);
	void setGrade(int);
	
// --------------------------------- Methods ------------------------------- //

	void	incGrade();
	void	decGrade();
	void	signForm(Form&);
// --------------------------------- Exception class ------------------------------- //
	class GradeTooHighException: public std::exception
	{
		const char* what() const throw();
	};
	class GradeTooLowException: public std::exception
	{
		const char* what() const throw();
	};

private:
	std::string const name;
	int		grade;

};
std::ostream & operator<<(std::ostream& lhs, const Bureaucrat& rhs);

#endif /* BUREAUCRAT_HPP */
