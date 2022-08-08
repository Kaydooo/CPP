/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mal-guna <m3t9mm@gmail.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/24 20:25:17 by mal-guna          #+#    #+#             */
/*   Updated: 2022/05/24 20:25:18 by mal-guna         ###   ########.fr       */
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
