/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mal-guna <m3t9mm@gmail.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/24 20:25:32 by mal-guna          #+#    #+#             */
/*   Updated: 2022/05/24 20:25:33 by mal-guna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>

#define RED "\033[0;31m"
#define GREEN "\033[1;32m"
#define CYAN "\033[0;36m"
#define YELLOW "\033[1;33m"
#define RESET "\033[0m"

class Animal
{
public:
	

// ----------------------------- Constructors ------------------------------ //
	Animal();	// Default Constructor
	Animal(const Animal& c);	// Copy Constructor

// ------------------------------ Destructor ------------------------------- //
	virtual ~Animal();	// Destructor

// ------------------------------- Operators ------------------------------- //
	Animal & operator=(const Animal& a);
	// Copy Assignement Operator

// --------------------------- Getters && Setters -------------------------- //
	std::string get_Type() const;
	void set_Type(std::string input);
	

// --------------------------------- Methods ------------------------------- //

	virtual void	makeSound() const = 0;
protected:
	std::string Type;

};
#endif /* ANIMAL_HPP */
