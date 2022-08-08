/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mal-guna <m3t9mm@gmail.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/02 19:10:28 by mal-guna          #+#    #+#             */
/*   Updated: 2022/06/02 19:10:29 by mal-guna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

# include <iostream>
# include <fstream>
# include <exception>
# include "Form.hpp"


#define RED "\033[0;31m"
#define GREEN "\033[1;32m"
#define CYAN "\033[0;36m"
#define YELLOW "\033[1;33m"
#define RESET "\033[0m"

#define checkStatus(X)  ((X) == (true) ? ("Signed") : ("Unsigned"))

class PresidentialPardonForm : public Form
{
public:

// ----------------------------- Constructors ------------------------------ //
	PresidentialPardonForm(std::string);	// Fields Constructor
	PresidentialPardonForm(const PresidentialPardonForm&);	// Copy Constructor

// ------------------------------ Destructor ------------------------------- //
	virtual ~PresidentialPardonForm();	// Destructor 

// ------------------------------- Operators ------------------------------- //
	PresidentialPardonForm & operator=(const PresidentialPardonForm&);
	// Copy Assignement Operator

// --------------------------- Getters && Setters -------------------------- //
	
// --------------------------------- Methods ------------------------------- //
void				execute(Bureaucrat const & executor) const;

// --------------------------------- Exception class ------------------------------- //

private:
	std::string const	target;
	PresidentialPardonForm();	// Default Constructor

};
std::ostream & operator<<(std::ostream& lhs, PresidentialPardonForm const &rhs);

#endif /* PRESIDENTIALPARDONFORM_HPP */
