/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mal-guna <mal-guna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/24 20:26:34 by mal-guna          #+#    #+#             */
/*   Updated: 2022/08/01 03:13:46 by mal-guna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"
// ----------------------------- Constructors ------------------------------ //
Cure::Cure():AMateria("cure")
{
	std::cout << GREEN << "Cure() Constructor Called" << RESET << std::endl;
	type = "cure";
}

Cure::Cure(const Cure& c):AMateria("cure")
{
	*this = c;
	std::cout << GREEN << "Cure() Copy Constructor Called" << RESET << std::endl;
}

// ------------------------------ Destructor ------------------------------- //
Cure::~Cure()
{
	std::cout << GREEN << "Cure() Destrcutor Called" << RESET << std::endl;
}
// ------------------------------- Operators ------------------------------- //

Cure & Cure::operator=(const Cure& c)
{
	type = c.getType();
	std::cout << RED << "Cure() Copy Assginemnt Operator Called" << RESET << std::endl;
	return *this;
}

// --------------------------- Getters && Setters -------------------------- //


// --------------------------------- Methods ------------------------------- //

Cure*	Cure::clone() const
{
	Cure *n = new Cure();
	return n;
}
void	Cure::use(ICharacter& target)
{
	std::cout << "* heals " << target.getName() << "’s wounds *" << std::endl;
}