/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mal-guna <mal-guna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/17 07:07:52 by mal-guna          #+#    #+#             */
/*   Updated: 2022/05/19 06:43:37 by mal-guna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"


DiamondTrap::DiamondTrap():ClapTrap("Default_clap_name", 100, 50, 30), ScavTrap(), FragTrap(){
	name = "Default";
	std::cout << GREEN << "DiamondTrap Default Constructor Called" << RESET << std::endl;
}
DiamondTrap::DiamondTrap(std::string n):ClapTrap(n + "_clap_name", 100, 50, 30), ScavTrap(), FragTrap(){
	name = n;
	std::cout << GREEN << "DiamondTrap Default Parm Constructor Called" << RESET << std::endl;
}
DiamondTrap::DiamondTrap(DiamondTrap const &src): ClapTrap(src.name + "clap_name", 100, 50, 30), ScavTrap(), FragTrap(){
	name = src.name;
	std::cout << GREEN << "DiamondTrap Copy Constructor Called" << RESET << std::endl;
}
DiamondTrap const &DiamondTrap::operator=(DiamondTrap const &rhs){
	name = rhs.name;
	ClapTrap::operator=(rhs);
	std::cout << GREEN << "DiamondTrap Copy Assignment Constructor Called" << RESET << std::endl;
	return *this;
}
DiamondTrap::~DiamondTrap(){
	std::cout << RED << "DiamondTrap Destructor Called" << RESET << std::endl;
}

void	DiamondTrap::print_status(){
	std::cout << CYAN << "HP:     "<< hitpoints << std::endl;
	std::cout << "Energy: "<< energypoints << std::endl;
	std::cout << "AD:     "<< attackdamage << RESET << std::endl;

}

void	DiamondTrap::whoAmI(){

	std::cout<< "Diamond Trap Name is : " << name << " and Clap Trap name is "<< ClapTrap::name << std::endl;
}
