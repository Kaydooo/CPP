/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mal-guna <m3t9mm@gmail.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/24 20:23:52 by mal-guna          #+#    #+#             */
/*   Updated: 2022/05/24 20:23:54 by mal-guna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

// ----------------------------- Constructors ------------------------------ //
Dog::Dog()
{
	Type = "Dog";
	std::cout << GREEN << "Default Constructor Called Dog()" << RESET << std::endl;
}

Dog::Dog(const Dog& c): Animal()
{
	Type = c.get_Type();
	std::cout << GREEN << "Copy Constructor Called Dog()" << RESET << std::endl;
}


// ------------------------------ Destructor ------------------------------- //
Dog::~Dog()
{
	std::cout << RED << "Destructor Called Dog()" << RESET << std::endl;
}
// ------------------------------- Operators ------------------------------- //

Dog & Dog::operator=(const Dog& c)
{
	Type = c.get_Type();
	std::cout << GREEN << "Copy Assignment Operator Called Dog()" << RESET << std::endl;
	return *this;
}

// --------------------------- Getters && Setters -------------------------- //


// --------------------------------- Methods ------------------------------- //
void	Dog::makeSound()const{std::cout << "Woof Woof" << std::endl;}
