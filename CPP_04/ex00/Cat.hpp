/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mal-guna <mal-guna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/24 20:23:49 by mal-guna          #+#    #+#             */
/*   Updated: 2022/08/01 03:11:22 by mal-guna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include <iostream>
#include "Animal.hpp"

class Cat: virtual public Animal
{
	public:
		
	// ----------------------------- Constructors ------------------------------ //
		Cat();	// Default Constructor
		Cat(const Cat& c);	// Copy Constructor

	// ------------------------------ Destructor ------------------------------- //
		~Cat();	// Destructor

	// ------------------------------- Operators ------------------------------- //
		// Copy Assignement Operator
		Cat & operator=(const Cat& a);

	// --------------------------- Getters && Setters -------------------------- //
		

	// --------------------------------- Methods ------------------------------- //
		void	makeSound()const;
};



#endif /* CAT_HPP */
