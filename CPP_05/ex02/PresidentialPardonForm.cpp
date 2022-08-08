/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mal-guna <m3t9mm@gmail.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/02 19:10:26 by mal-guna          #+#    #+#             */
/*   Updated: 2022/06/02 19:10:27 by mal-guna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"
#include <cstdlib>
#include <ctime>


// ----------------------------- Constructors ------------------------------ //
PresidentialPardonForm::PresidentialPardonForm(std::string tar):Form("PresidentialPardonForm", 25, 5), target(tar)
{
	std::cout << GREEN << "Fields Constructor Called PresidentialPardonForm()" << RESET << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& c):Form("PresidentialPardonForm", 25, 5)
{
	*this = c;
	std::cout << GREEN << "Copy Constructor Called PresidentialPardonForm()" << RESET << std::endl;
}

// ------------------------------ Destructor ------------------------------- //
PresidentialPardonForm::~PresidentialPardonForm()
{
	std::cout << RED << "Destructor Called ~PresidentialPardonForm()" << RESET << std::endl;
}
// ------------------------------- Operators ------------------------------- //

PresidentialPardonForm & PresidentialPardonForm::operator=(const PresidentialPardonForm& c)
{
	const_cast<std::string&> (target) = c.target;
	std::cout << GREEN << "Copy Assignment Operator PresidentialPardonForm()" << RESET << std::endl;
	return *this;
}
std::ostream &operator<<(std::ostream& lhs, PresidentialPardonForm const &rhs)
{
	lhs << rhs.getName() << " , Status : " <<  checkStatus(rhs.getStatus()) << " | Sign_grade = " << rhs.getSgrade() << " | Exec_grade = " << rhs.getEgrade();
	return (lhs);
}

// --------------------------- Getters && Setters -------------------------- //


// --------------------------------- Methods ------------------------------- //

void	PresidentialPardonForm::execute(Bureaucrat const & executer) const
{
	if(this->getStatus())
	{
		if(executer.getGrade() <= this->getEgrade())
		{
			std::cout << GREEN << target << " has been pardoned by Zaphod Beeblebrox." << RESET << std::endl;
		}
		else
			throw Form::GradeTooLowException();
	}
	else
	{
		throw FormNotSignedException();
	}
}