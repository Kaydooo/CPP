/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mal-guna <m3t9mm@gmail.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/24 20:24:47 by mal-guna          #+#    #+#             */
/*   Updated: 2022/05/24 20:24:48 by mal-guna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

// ----------------------------- Constructors ------------------------------ //
Dog::Dog()
{
	Type = "Dog";
	this->b_obj = new Brain();
	std::cout << GREEN << "Default Constructor Called Dog()" << RESET << std::endl;

}

Dog::Dog(const Dog& c): Animal()
{
	Type = c.get_Type();
	b_obj = new Brain();
	*b_obj = *(c.b_obj);
	std::cout << GREEN << "Copy Constructor Called Dog()" << RESET << std::endl;

}

// ------------------------------ Destructor ------------------------------- //
Dog::~Dog()
{
	delete b_obj;
	std::cout << RED << "Destructor Called Dog()" << RESET << std::endl;

}
// ------------------------------- Operators ------------------------------- //

Dog & Dog::operator=(const Dog& c)
{
	Type = c.get_Type();
	delete b_obj;
	b_obj = new Brain();
	*b_obj = *(c.b_obj);
	std::cout << GREEN << "Copy Assignment Operator Called Dog()" << RESET << std::endl;
	return *this;
}

// --------------------------- Getters && Setters -------------------------- //


// --------------------------------- Methods ------------------------------- //
void	Dog::makeSound()const{std::cout << "Woof Woof" << std::endl;}
