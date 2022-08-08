/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mal-guna <mal-guna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/02 19:10:55 by mal-guna          #+#    #+#             */
/*   Updated: 2022/08/01 03:19:41 by mal-guna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP

# include <iostream>
# include <exception>
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

#define RED "\033[0;31m"
#define GREEN "\033[1;32m"
#define CYAN "\033[0;36m"
#define YELLOW "\033[1;33m"
#define RESET "\033[0m"
class Form;
class Intern
{
	public:
		
	// ----------------------------- Constructors ------------------------------ //
		Intern();	// Default Constructor
		Intern(const Intern&);	// Copy Constructor

	// ------------------------------ Destructor ------------------------------- //
		virtual ~Intern();	// Destructor

	// ------------------------------- Operators ------------------------------- //
		Intern & operator=(const Intern&);
		// Copy Assignement Operator

	// --------------------------- Getters && Setters -------------------------- //
		
	// --------------------------------- Methods ------------------------------- //
		Form*	makeForm(std::string, std::string);
		Form*	makeS(std::string);
		Form*	makeR(std::string);
		Form*	makeP(std::string);

	// --------------------------------- Exception class ------------------------------- //
	class FormNotFoundException: public std::exception
	{
		const char* what() const throw();
	};

		typedef Form *(Intern::*func)(std::string);

};

#endif /* INTERN_HPP */
