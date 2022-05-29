#include "Form.hpp"
#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"




int	main(void)
{
	/* 
		Error Check
	*/
	
	// Form	f;
	// ShrubberyCreationForm s("FORM", 11, 22);
	// s.getName();

	/* Exceptions Check */
	ShrubberyCreationForm shrubbery("S1");
	RobotomyRequestForm robotomy("R1");
	PresidentialPardonForm presidential("P1");
	Bureaucrat ber1("Moa", 1);
	Bureaucrat ber2("Moa2", 146);
	Bureaucrat ber3("Moa3", 6);
	Bureaucrat ber4("Moa4", 26);

	// ber1.signForm(shrubbery);
	// ber1.executeForm(shrubbery);
	// ber2.signForm(shrubbery);
	// ber2.executeForm(shrubbery);

	ber1.signForm(robotomy);
	ber1.executeForm(robotomy);
	ber1.signForm(presidential);
	ber3.executeForm(presidential);
	// ber2.signForm(robotomy);
	// ber2.executeForm(robotomy);
}