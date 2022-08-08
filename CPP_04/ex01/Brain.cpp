/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mal-guna <m3t9mm@gmail.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/24 20:24:37 by mal-guna          #+#    #+#             */
/*   Updated: 2022/05/24 20:24:38 by mal-guna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

// ----------------------------- Constructors ------------------------------ //
Brain::Brain()
{
	std::cout << GREEN << "Default Constructor Called Brain()" << RESET << std::endl;

}

Brain::Brain(const Brain& c)
{
	for(int i = 0; i < 100 ; i++)
		ideas[i] = c.get_ideas(i);
	std::cout << GREEN << "Copy Constructor Called Brain(const Brain& c)" << RESET << std::endl;
}


// ------------------------------ Destructor ------------------------------- //
Brain::~Brain()
{
	std::cout << RED << "Destructor Called ~Brain()" << RESET << std::endl;
}
// ------------------------------- Operators ------------------------------- //

Brain & Brain::operator=(const Brain& c)
{
	for(int i = 0; i < 100 ; i++)
		ideas[i] = c.get_ideas(i);
	std::cout << GREEN << "Copy Constructor Called Brain(const Brain& c)" << RESET << std::endl;
	return *this;
}

// --------------------------- Getters && Setters -------------------------- //
std::string Brain::get_ideas(int index) const
{
	if(index < 0 || index >= 100) 
	{
		std::cout << "get_ideas : Wrong Index !" << std::endl;
		return (NULL);
	}
	return ideas[index]; 
}

void Brain::set_ideas(std::string input, int index)
{
	if(index < 0 || index >= 100) 
		std::cout << "set_ideas : Wrong Index !" << std::endl;
	else
		ideas[index] = input;
 }



// --------------------------------- Methods ------------------------------- //

