/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mal-guna <m3t9mm@gmail.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/24 20:24:09 by mal-guna          #+#    #+#             */
/*   Updated: 2022/05/24 20:24:10 by mal-guna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"
	
// ----------------------------- Constructors ------------------------------ //
WrongCat::WrongCat()
{
	Type = "WrongCat";
	std::cout << GREEN << "Default Constructor Called WrongCat()" << RESET << std::endl;
}

WrongCat::WrongCat(const WrongCat& c): WrongAnimal()
{
	Type = c.get_Type();
	std::cout << GREEN << "Copy Constructor Called WrongCat()" << RESET << std::endl;
}

// ------------------------------ Destructor ------------------------------- //
WrongCat::~WrongCat()
{
	std::cout << RED << "Destructor Called ~WrongCat()" << RESET << std::endl;
}
// ------------------------------- Operators ------------------------------- //

WrongCat & WrongCat::operator=(const WrongCat& c)
{
	Type = c.get_Type();
	std::cout << GREEN << "Copy Assignment Operator WrongCat()" << RESET << std::endl;
	return *this;
}

// --------------------------- Getters && Setters -------------------------- //


// --------------------------------- Methods ------------------------------- //
void	WrongCat::makeSound() const{std::cout << "Meoww.." << std::endl;}
