#include "Form.hpp"
#include "Bureaucrat.hpp"
#include "Intern.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"




int	main(void)
{
	Intern someRandomIntern;
	Form* rrf;
	// rrf = someRandomIntern.makeForm("Shrubbery Creation", "Bender");
	rrf = someRandomIntern.makeForm("Robotomy Request", "Bender");
	// rrf = someRandomIntern.makeForm("Presidential PardonForm", "Bender");

	Bureaucrat ber1("Moa", 1);
	if(rrf)
	{
		ber1.signForm(*rrf);
		ber1.executeForm(*rrf);
	}

	delete rrf;
}