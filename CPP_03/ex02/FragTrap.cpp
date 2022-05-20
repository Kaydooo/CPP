/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mal-guna <m3t9mm@gmail.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 10:30:33 by mal-guna          #+#    #+#             */
/*   Updated: 2022/05/19 10:30:34 by mal-guna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "FragTrap.hpp"

	FragTrap::FragTrap(void)
	{
		std::cout << GREEN << "FragTrap Default Constructor Called" << RESET << std::endl;
		name = "Default";
		hitpoints = 100;
		energypoints = 100;
		attackdamage = 30;
	}

	FragTrap::FragTrap(std::string str){

		std::cout << GREEN << "FragTrap Default Parm Constructor Called" << RESET << std::endl;
		name = str;
		hitpoints = 100;
		energypoints = 100;
		attackdamage = 30;
	}

	FragTrap::FragTrap(FragTrap const &src):ClapTrap(src){
	std::cout << GREEN << "FragTrap Copy Constructor Called" << RESET << std::endl;
	}

	FragTrap::~FragTrap(void)
	{
		std::cout << RED << "FragTrap Destructor Called" << RESET << std::endl;
	}

	FragTrap &FragTrap::operator=(FragTrap const &rhs)
	{
		name = rhs.name;
		hitpoints = rhs.hitpoints;
		energypoints = rhs.energypoints;
		attackdamage = rhs.attackdamage;
		std::cout << GREEN << "FragTrap Copy Assignment Constructor Called" << RESET << std::endl;
		return (*this);
	}

	void	FragTrap::highFivesGuys()
	{
		std::cout << name << ": FragTrap HIGHHH FIVE !!!!!" << std::endl;
	}
