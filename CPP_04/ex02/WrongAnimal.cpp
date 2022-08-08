/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mal-guna <m3t9mm@gmail.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/24 20:26:02 by mal-guna          #+#    #+#             */
/*   Updated: 2022/05/24 20:26:04 by mal-guna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"
// ----------------------------- Constructors ------------------------------ //
WrongAnimal::WrongAnimal()
{
	std::cout << GREEN << "Default Constructor Called WrongAnimal()" << RESET << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal& c)
{
	Type = c.get_Type();
	std::cout << GREEN << "Copy Constructor Called WrongAnimal()" << RESET << std::endl;
}

// ------------------------------ Destructor ------------------------------- //
WrongAnimal::~WrongAnimal()
{
	std::cout << RED << "Destructor Called ~WrongAnimal()" << RESET << std::endl;
}
// ------------------------------- Operators ------------------------------- //

WrongAnimal & WrongAnimal::operator=(const WrongAnimal& c)
{
	Type = c.get_Type();
	std::cout << GREEN << "Copy Assignment Operator WrongAnimal()" << RESET << std::endl;
	return *this;
}

// --------------------------- Getters && Setters -------------------------- //
std::string WrongAnimal::get_Type() const{ return Type; }
void WrongAnimal::set_Type(std::string input){ Type = input; }



// --------------------------------- Methods ------------------------------- //

void	WrongAnimal::makeSound() const{std::cout << "TSSSS." << std::endl;}