/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mal-guna <mal-guna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/24 20:24:11 by mal-guna          #+#    #+#             */
/*   Updated: 2022/08/01 03:12:31 by mal-guna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

# include <iostream>
#include "WrongAnimal.hpp"

class WrongCat: virtual public WrongAnimal
{
	public:

	// ----------------------------- Constructors ------------------------------ //
		WrongCat();	// Default Constructor
		WrongCat(const WrongCat& c);	// Copy Constructor

	// ------------------------------ Destructor ------------------------------- //
		~WrongCat();	// Destructor

	// ------------------------------- Operators ------------------------------- //
		WrongCat & operator=(const WrongCat& a);
		// Copy Assignement Operator

	// --------------------------- Getters && Setters -------------------------- //
		

	// --------------------------------- Methods ------------------------------- //
		void	makeSound()const;
};

#endif /* WRONGCAT_HPP */
