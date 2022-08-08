/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mal-guna <m3t9mm@gmail.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/24 20:26:14 by mal-guna          #+#    #+#             */
/*   Updated: 2022/05/24 20:26:15 by mal-guna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include "ICharacter.hpp"

// ----------------------------- Constructors ------------------------------ //

AMateria::AMateria(std::string const &type) : type(type)
{
	std::cout << GREEN << "Materia type: " << type << " constructed" << RESET << std::endl;
	return ;
}

AMateria::~AMateria()
{
	std::cout << RED << "AMateria Destrcutor Called" << RESET << std::endl;
	return ;
}

std::string const	&AMateria::getType(void) const
{
	return (type);
}

void	AMateria::use(ICharacter& target)
{
	std::cout << "*Default use " << " on " << target.getName() << " *" << std::endl;
}