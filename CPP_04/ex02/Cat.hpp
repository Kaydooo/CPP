/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mal-guna <m3t9mm@gmail.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/24 20:25:51 by mal-guna          #+#    #+#             */
/*   Updated: 2022/05/24 20:25:52 by mal-guna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include <iostream>
#include "Animal.hpp"
#include "Brain.hpp"

class Cat: virtual public Animal
{

private:
	Brain *b_obj;
public:
	

// ----------------------------- Constructors ------------------------------ //
	Cat();	// Default Constructor
	Cat(const Cat& c);	// Copy Constructor

// ------------------------------ Destructor ------------------------------- //
	~Cat();	// Destructor

// ------------------------------- Operators ------------------------------- //
	Cat & operator=(const Cat& a);
	// Copy Assignement Operator

// --------------------------- Getters && Setters -------------------------- //
	

// --------------------------------- Methods ------------------------------- //
	void	makeSound()const;
};


#endif /* CAT_HPP */
