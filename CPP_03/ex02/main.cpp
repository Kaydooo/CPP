/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mal-guna <m3t9mm@gmail.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 10:24:40 by mal-guna          #+#    #+#             */
/*   Updated: 2022/05/19 10:24:41 by mal-guna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int main(void) 
{
	ClapTrap DefaultTank;
	DefaultTank.attack("Dummy Tank");
	DefaultTank.takeDamage(30);
	DefaultTank.beRepaired(10);
	DefaultTank.attack("Dummy Tank");
	ScavTrap Tank2("Tank2");
	Tank2.attack("Dummy Tank 2");
	Tank2.takeDamage(9);
	Tank2.beRepaired(10);
	Tank2.attack("Dummy Tank 2");
	Tank2.takeDamage(102);
	Tank2.takeDamage(10);
	Tank2.attack("Dummy Tank 2");
	Tank2.guardGate();

	FragTrap F_Tank("F_Tank");
	F_Tank.attack("Dummy Tank 3");
	F_Tank.takeDamage(9);
	F_Tank.beRepaired(10);
	F_Tank.attack("Dummy Tank 3");
	F_Tank.takeDamage(102);
	F_Tank.takeDamage(10);
	F_Tank.attack("Dummy Tank 3");
	F_Tank.highFivesGuys();
	return 0;
}
