/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mal-guna <mal-guna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/24 20:26:41 by mal-guna          #+#    #+#             */
/*   Updated: 2022/08/01 03:14:13 by mal-guna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP

# include <iostream>
# include "AMateria.hpp"

class Ice: public AMateria
{
	public:

	// ----------------------------- Constructors ------------------------------ //
		Ice();	// Default Constructor
		Ice(const Ice& c);	// Copy Constructor

	// ------------------------------ Destructor ------------------------------- //
		~Ice();	// Destructor

	// ------------------------------- Operators ------------------------------- //
		Ice & operator=(const Ice& a);
		// Copy Assignement Operator

	// --------------------------- Getters && Setters -------------------------- //
		

	// --------------------------------- Methods ------------------------------- //
		Ice* clone() const;
		void use(ICharacter& target);
	

};

#endif /* ICE_HPP */
