#ifndef FORM_HPP
# define FORM_HPP

# include <iostream>
# include <exception>
# include "Bureaucrat.hpp"

#define RED "\033[0;31m"
#define GREEN "\033[1;32m"
#define CYAN "\033[0;36m"
#define YELLOW "\033[1;33m"
#define RESET "\033[0m"

#define checkStatus(X)  ((X) == (true) ? ("Signed") : ("Unsigned"))

class Bureaucrat;

class Form
{
public:

// ----------------------------- Constructors ------------------------------ //
	Form();	// Default Constructor
	Form(std::string, int, int);	// Fields Constructor
	Form(const Form&);	// Copy Constructor

// ------------------------------ Destructor ------------------------------- //
	virtual ~Form();	// Destructor 

// ------------------------------- Operators ------------------------------- //
	Form & operator=(const Form&);
	// Copy Assignement Operator

// --------------------------- Getters && Setters -------------------------- //
	std::string  const	getName() const;
	int					getSgrade() const;
	int					getEgrade() const;
	bool				getStatus() const;
	
// --------------------------------- Methods ------------------------------- //
	void				beSigned(Bureaucrat&);
	virtual void				execute(Bureaucrat const & executor) const = 0;
	
// --------------------------------- Exception class ------------------------------- //
	class GradeTooHighException: public std::exception
	{
		const char* what() const throw();
	};
	class GradeTooLowException: public std::exception
	{
		const char* what() const throw();
	};
	class FormNotSignedException: public std::exception
	{
	const char* what() const throw();
	};

private:
	std::string const	name;
	int		const		sign_grade;
	int		const		exec_grade;
	bool				status;


};
std::ostream & operator<<(std::ostream& lhs, Form const &rhs);

#endif /* FORM_HPP */
