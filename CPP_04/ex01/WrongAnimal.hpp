/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mal-guna <m3t9mm@gmail.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/24 20:25:12 by mal-guna          #+#    #+#             */
/*   Updated: 2022/05/24 20:25:13 by mal-guna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

# include <iostream>

#define RED "\033[0;31m"
#define GREEN "\033[1;32m"
#define CYAN "\033[0;36m"
#define YELLOW "\033[1;33m"
#define RESET "\033[0m"

class WrongAnimal
{
public:
	

// ----------------------------- Constructors ------------------------------ //
	WrongAnimal();	// Default Constructor
	WrongAnimal(const WrongAnimal& c);	// Copy Constructor

// ------------------------------ Destructor ------------------------------- //
	virtual ~WrongAnimal();	// Destructor

// ------------------------------- Operators ------------------------------- //
	WrongAnimal & operator=(const WrongAnimal& a);
	// Copy Assignement Operator

// --------------------------- Getters && Setters -------------------------- //
	std::string get_Type() const;
	void set_Type(std::string input);
	

// --------------------------------- Methods ------------------------------- //

	void	makeSound() const;
protected:
	std::string Type;

};

#endif /* WRONGANIMAL_HPP */
