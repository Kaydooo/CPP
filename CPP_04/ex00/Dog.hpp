/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mal-guna <mal-guna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/24 20:23:55 by mal-guna          #+#    #+#             */
/*   Updated: 2022/08/01 03:11:42 by mal-guna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include <iostream>
#include "Animal.hpp"

class Dog: virtual public Animal
{
	public:
		
	// ----------------------------- Constructors ------------------------------ //
		Dog();	// Default Constructor
		Dog(const Dog& c);	// Copy Constructor

	// ------------------------------ Destructor ------------------------------- //
		~Dog();	// Destructor

	// ------------------------------- Operators ------------------------------- //
		Dog & operator=(const Dog& a);
		// Copy Assignement Operator

	// --------------------------- Getters && Setters -------------------------- //
		

	// --------------------------------- Methods ------------------------------- //
		void	makeSound()const;
};

#endif /* DOG_HPP */
