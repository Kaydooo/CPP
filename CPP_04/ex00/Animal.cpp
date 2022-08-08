/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mal-guna <m3t9mm@gmail.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/24 20:23:40 by mal-guna          #+#    #+#             */
/*   Updated: 2022/05/24 20:23:41 by mal-guna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

// ----------------------------- Constructors ------------------------------ //
Animal::Animal()
{
	std::cout << GREEN << "Default Constructor Called Animal()" << RESET << std::endl;
}
Animal::Animal(const Animal& c)
{
	Type = c.get_Type();
	std::cout << GREEN << "Copy Constructor Called Animal()" << RESET << std::endl;
}

// ------------------------------ Destructor ------------------------------- //
Animal::~Animal()
{
	std::cout << RED << "Destructor Called ~Animal()" << RESET << std::endl;
}
// ------------------------------- Operators ------------------------------- //

Animal & Animal::operator=(const Animal& c)
{
	Type = c.get_Type();
	std::cout << GREEN << "Copy Assignment Operator Animal()" << RESET << std::endl;
	return *this;
}

// --------------------------- Getters && Setters -------------------------- //
std::string Animal::get_Type() const{ return Type; }
void Animal::set_Type(std::string input){ Type = input; }


// --------------------------------- Methods ------------------------------- //

void	Animal::makeSound() const{std::cout << "no sound.." << std::endl;}
