/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mal-guna <mal-guna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/02 19:09:58 by mal-guna          #+#    #+#             */
/*   Updated: 2022/08/01 03:16:26 by mal-guna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

// ----------------------------- Constructors ------------------------------ //
Bureaucrat::Bureaucrat():name("unammed"), grade(150)
{
	std::cout << GREEN << "Default Constructor Called Bureaucrat()" << RESET << std::endl;
}

Bureaucrat::Bureaucrat(const Bureaucrat& c)
{
	*this = c;
	std::cout << GREEN << "Copy Constructor Called Bureaucrat()" << RESET << std::endl;
}

Bureaucrat::Bureaucrat(std::string n, int g) : name(n)
{
	if(g > 150)
		throw GradeTooLowException();
	else if (g < 1)
		throw GradeTooHighException();
	else
		grade = g;
	std::cout << GREEN << "Fields Constructor Called Bureaucrat(std::string in_Type)" << RESET << std::endl;
}

// ------------------------------ Destructor ------------------------------- //
Bureaucrat::~Bureaucrat()
{
	std::cout << RED << "Destructor Called ~Bureaucrat()" << RESET << std::endl;

}
// ------------------------------- Operators ------------------------------- //

Bureaucrat & Bureaucrat::operator=(const Bureaucrat& c)
{
	grade = c.getGrade();
	const_cast<std::string&> (name) = c.getName();
	std::cout << GREEN << "Copy Assignment Operator Bureaucrat()" << RESET << std::endl;
	return *this;
}

std::ostream &operator<<(std::ostream& lhs, const Bureaucrat& rhs)
{
	lhs << rhs.getName() << ", bureaucrat grade " << rhs.getGrade();
	return (lhs);
}

// --------------------------- Getters && Setters -------------------------- //
std::string const		Bureaucrat::getName() const{ return name; }

int						Bureaucrat::getGrade() const{ return grade; }

// --------------------------------- Methods ------------------------------- //
const char* Bureaucrat::GradeTooLowException::what() const throw(){return "Grade Too Low";}

const char* Bureaucrat::GradeTooHighException::what() const throw(){return "Grade Too High";}

void	Bureaucrat::incGrade()
{
	if (grade == 1)
		throw GradeTooHighException();
	else
		grade--;
}
void	Bureaucrat::decGrade()
{
	if (grade == 150)
		throw GradeTooLowException();
	else
		grade++;
}

void	Bureaucrat::signForm(Form & f)
{
	try{
		f.beSigned(*this);
		std::cout << *this << " Signed the from " << f << std::endl;
	}
	catch(Form::GradeTooLowException &e)
	{
		std::cerr << *this << " couldn’t sign " << f << " because Bur grade was not high enough! " << std::endl;
	}
}
