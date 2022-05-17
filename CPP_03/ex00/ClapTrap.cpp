/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mal-guna <m3t9mm@gmail.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/12 14:50:04 by mal-guna          #+#    #+#             */
/*   Updated: 2022/05/12 15:08:05 by mal-guna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
	
	ClapTrap::ClapTrap():name("Default"), hitpoints(10),energypoints(10), attackdamage(0)
	{
		std::cout << GREEN << "Default Constrcuter Called" << RESET << std::endl;
	}
	
	ClapTrap::ClapTrap(std::string str): name(str), hitpoints(10),energypoints(10), attackdamage(0){
		std::cout << GREEN << "String Constrcuter Called" << RESET << std::endl;
	}

	ClapTrap::ClapTrap(ClapTrap const &src):name(src.name), hitpoints(src.hitpoints),
											energypoints(src.energypoints), attackdamage(src.attackdamage){
		std::cout << GREEN << "Copy Constrcuter Called" << RESET << std::endl;
	}
	
	ClapTrap::~ClapTrap(){
		std::cout << RED << "Destrcuter Called" << RESET << std::endl;

	}
	
	ClapTrap &ClapTrap::operator=(ClapTrap const &rhs){
		name = rhs.name;
		hitpoints = rhs.hitpoints;
		energypoints = rhs.energypoints;
		attackdamage = rhs.attackdamage;
		std::cout << GREEN << "Copy Assignment Constrcuter Called" << RESET << std::endl;
		return (*this);
	}
	
	void ClapTrap::attack(const std::string& target)
	{
		if(energypoints > 0 && hitpoints > 0)
		{
			std::cout << name << ": Attacked " << target << " with " << this->attackdamage << " Damage" << std::endl;
			energypoints--;
		}
		else
			std::cout << name << ": there is no Enegry/HP left .." << std::endl;
	}

	void ClapTrap::takeDamage(unsigned int amount)
	{
		if(hitpoints > 0)
		{
			hitpoints -= amount;
			std::cout << name << ": has taken " << amount << " Damage !" << std::endl; 
			if(hitpoints <= 0)
				std::cout << name << ": has died after taking this dammage !" << std::endl;
		}
		else
			std::cout << name << ": Already Dead !" << std::endl;
		if(hitpoints < 0)
			hitpoints = 0;
	}
	
	void ClapTrap::beRepaired(unsigned int amount){
		if(energypoints > 0)
		{
			hitpoints += amount;
			energypoints--;
			std::cout << name << ": Healed amount of " << amount << " using 1 Energy Point !" <<  std::endl;
		}
		else{
			std::cout << name << ": there is no Energy points left" << std::endl;
		}
			// std::cout << "Energy points : " << energypoints << std::endl << "Hit Points :    " << hitpoints << std::endl; 
	}