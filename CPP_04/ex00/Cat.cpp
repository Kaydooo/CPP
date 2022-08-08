/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mal-guna <m3t9mm@gmail.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/24 20:23:46 by mal-guna          #+#    #+#             */
/*   Updated: 2022/05/24 20:23:47 by mal-guna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

// ----------------------------- Constructors ------------------------------ //
Cat::Cat()
{
	Type = "Cat";
	std::cout << GREEN << "Default Constructor Called Cat()" << RESET << std::endl;
}

Cat::Cat(const Cat& c):Animal()
{
	Type = c.get_Type();
	std::cout << GREEN << "Copy Constructor Called Cat()" << RESET << std::endl;

}

// ------------------------------ Destructor ------------------------------- //
Cat::~Cat()
{
	std::cout << RED << "Destructor Called Cat()" << RESET << std::endl;
}
// ------------------------------- Operators ------------------------------- //

Cat & Cat::operator=(const Cat& c)
{
	Type = c.get_Type();
	std::cout << GREEN << "Copy Assignment Operator Called Cat()" << RESET << std::endl;
	return *this;
}

// --------------------------- Getters && Setters -------------------------- //


// --------------------------------- Methods ------------------------------- //
void	Cat::makeSound() const{std::cout << "Meoww.." << std::endl;}
