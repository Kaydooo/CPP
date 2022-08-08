/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mal-guna <mal-guna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/02 19:10:23 by mal-guna          #+#    #+#             */
/*   Updated: 2022/08/01 03:17:59 by mal-guna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"




int	main(void)
{
	/* 
		Error Test
	*/
	
	// Form	f;
	// ShrubberyCreationForm s("FORM", 11, 22);
	// s.getName();

	/* Exceptions Test */
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