/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mal-guna <m3t9mm@gmail.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/02 19:11:16 by mal-guna          #+#    #+#             */
/*   Updated: 2022/06/02 19:11:19 by mal-guna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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