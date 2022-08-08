/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mal-guna <mal-guna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/02 19:11:49 by mal-guna          #+#    #+#             */
/*   Updated: 2022/08/01 03:20:23 by mal-guna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

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

class ShrubberyCreationForm : public Form
{
	public:

	// ----------------------------- Constructors ------------------------------ //
		ShrubberyCreationForm(std::string);	// Fields Constructor
		ShrubberyCreationForm(const ShrubberyCreationForm&);	// Copy Constructor

	// ------------------------------ Destructor ------------------------------- //
		virtual ~ShrubberyCreationForm();	// Destructor 

	// ------------------------------- Operators ------------------------------- //
		ShrubberyCreationForm & operator=(const ShrubberyCreationForm&);
		// Copy Assignement Operator

	// --------------------------- Getters && Setters -------------------------- //
		
	// --------------------------------- Methods ------------------------------- //
	void				execute(Bureaucrat const & executor) const;

	// --------------------------------- Exception class ------------------------------- //

	private:
		std::string const	target;
		ShrubberyCreationForm();	// Default Constructor

};
std::ostream & operator<<(std::ostream& lhs, ShrubberyCreationForm const &rhs);

#endif /* SHRUBBERYCREATIONFORM_HPP */
