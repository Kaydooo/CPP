/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mal-guna <m3t9mm@gmail.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/02 19:10:06 by mal-guna          #+#    #+#             */
/*   Updated: 2022/06/02 19:10:10 by mal-guna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include "Bureaucrat.hpp"

void	init_form(std::string name, int sGrade, int eGrade)
{
	try
	{
		Form form = Form(name, sGrade, eGrade);
		std::cout << form << std::endl;
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
}


int	main(void)
{
	init_form("Form1", 1, 150);
	init_form("Form4", 1, 151);
	init_form("Form3", -1, 150);
	init_form("Form5", -2, 155);

	Bureaucrat	ber1 = Bureaucrat("employee", 100);
	Bureaucrat	ber2 = Bureaucrat("President", 1);
	Form	form1 = Form("low", 144, 120);
	Form	form2 = Form("medium", 99, 80);
	Form	form3 = Form("topsecret", 3, 2);

	std::cout << std::endl << "Employee" << std::endl;
	ber1.signForm(form1);
	ber1.signForm(form2);
	ber1.signForm(form3);
	std::cout << "President" << std::endl;
	ber2.signForm(form1);
	ber2.signForm(form2);
	ber2.signForm(form3);
}