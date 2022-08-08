/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mal-guna <m3t9mm@gmail.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/02 19:10:01 by mal-guna          #+#    #+#             */
/*   Updated: 2022/06/02 19:10:03 by mal-guna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

// ----------------------------- Constructors ------------------------------ //
Form::Form():name("unammed form"), sign_grade(150), exec_grade(100), status(false)
{
	std::cout << GREEN << "Default Constructor Called Form()" << RESET << std::endl;
}

Form::Form(const Form& c):name("unammed form"), sign_grade(150), exec_grade(100), status(false)
{
	*this = c;
	std::cout << GREEN << "Copy Constructor Called Form()" << RESET << std::endl;
}

Form::Form(std::string n, int sg, int eg) : name(n), sign_grade(sg), exec_grade(eg), status(false)
{
	if(sign_grade > 150 || exec_grade > 150)
		throw GradeTooLowException();
	else if (sign_grade < 1 || exec_grade < 1)
		throw GradeTooHighException();

	std::cout << GREEN << "Fields Constructor Called Form(std::string in_Type)" << RESET << std::endl;
}

// ------------------------------ Destructor ------------------------------- //
Form::~Form()
{
	std::cout << RED << "Destructor Called ~Form()" << RESET << std::endl;

}
// ------------------------------- Operators ------------------------------- //

Form & Form::operator=(const Form& c)
{
	const_cast<int&> (sign_grade) = c.getSgrade();
	const_cast<int&> (exec_grade) = c.getEgrade();
	status = c.getStatus();
	const_cast<std::string&> (name) = c.getName();
	std::cout << GREEN << "Copy Assignment Operator Form()" << RESET << std::endl;
	return *this;
}
std::ostream &operator<<(std::ostream& lhs, Form const &rhs)
{
	lhs << rhs.getName() << " , Status : " <<  checkStatus(rhs.getStatus()) << " | Sign_grade = " << rhs.getSgrade() << " | Exec_grade = " << rhs.getEgrade();
	return (lhs);
}

// --------------------------- Getters && Setters -------------------------- //
std::string const		Form::getName() const{ return name; }
int						Form::getSgrade() const{ return sign_grade; }
int						Form::getEgrade() const{ return exec_grade; }
bool					Form::getStatus() const{ return status; }



// --------------------------------- Methods ------------------------------- //
const char* Form::GradeTooLowException::what() const throw(){return "Grade Too Low";}

const char* Form::GradeTooHighException::what() const throw(){return "Grade Too High";}

void		Form::beSigned(Bureaucrat &b)
{
	if(b.getGrade() <= sign_grade)
		status = true;
	else
		throw Form::GradeTooLowException();
}
