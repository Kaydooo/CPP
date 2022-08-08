/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mal-guna <m3t9mm@gmail.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/02 19:10:30 by mal-guna          #+#    #+#             */
/*   Updated: 2022/06/02 19:10:31 by mal-guna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"
#include <cstdlib>
#include <ctime>


// ----------------------------- Constructors ------------------------------ //
RobotomyRequestForm::RobotomyRequestForm(std::string tar):Form("RobotomyRequestForm", 72, 45), target(tar)
{
	std::cout << GREEN << "Fields Constructor Called RobotomyRequestForm()" << RESET << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& c):Form("RobotomyRequestForm", 72, 45)
{
	*this = c;
	std::cout << GREEN << "Copy Constructor Called RobotomyRequestForm()" << RESET << std::endl;
}

// ------------------------------ Destructor ------------------------------- //
RobotomyRequestForm::~RobotomyRequestForm()
{
	std::cout << RED << "Destructor Called ~RobotomyRequestForm()" << RESET << std::endl;
}
// ------------------------------- Operators ------------------------------- //

RobotomyRequestForm & RobotomyRequestForm::operator=(const RobotomyRequestForm& c)
{
	const_cast<std::string&> (target) = c.target;
	std::cout << GREEN << "Copy Assignment Operator RobotomyRequestForm()" << RESET << std::endl;
	return *this;
}
std::ostream &operator<<(std::ostream& lhs, RobotomyRequestForm const &rhs)
{
	lhs << rhs.getName() << " , Status : " <<  checkStatus(rhs.getStatus()) << " | Sign_grade = " << rhs.getSgrade() << " | Exec_grade = " << rhs.getEgrade();
	return (lhs);
}

// --------------------------- Getters && Setters -------------------------- //


// --------------------------------- Methods ------------------------------- //

void	RobotomyRequestForm::execute(Bureaucrat const & executer) const
{
	if(this->getStatus())
	{
		if(executer.getGrade() <= this->getEgrade())
		{
			std::cout << "!!!!!!!!!!!!"<< CYAN << "SOME DRILLING NOISES" << RESET << "!!!!!!!!!!!! " << std::endl;
			std::srand(time(0));
			if((std::rand() % 100) < 50)
				std::cout << GREEN << target << " has been robotomized successfully" << RESET << std::endl;
			else
				std::cout << RED << "Faild to robotomize " << target << RESET << std::endl;
		}
		else
			throw Form::GradeTooLowException();
	}
	else
	{
		throw FormNotSignedException();
	}
}