/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mal-guna <m3t9mm@gmail.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/24 20:24:49 by mal-guna          #+#    #+#             */
/*   Updated: 2022/05/24 20:24:57 by mal-guna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include <iostream>
#include "Animal.hpp"
#include "Brain.hpp"

class Dog: virtual public Animal
{
private:
	Brain *b_obj;

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
