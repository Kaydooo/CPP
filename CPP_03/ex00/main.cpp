/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mal-guna <mal-guna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/12 14:50:07 by mal-guna          #+#    #+#             */
/*   Updated: 2022/05/19 05:56:00 by mal-guna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main(void) {

	ClapTrap DefaultTank;
	DefaultTank.attack("Dummy Tank");
	DefaultTank.takeDamage(30);
	DefaultTank.beRepaired(10);
	DefaultTank.attack("Dummy Tank");
	ClapTrap Tank2("Tank2");
	Tank2.attack("Dummy Tank 2");
	Tank2.takeDamage(9);
	Tank2.beRepaired(10);
	Tank2.attack("Dummy Tank 2");
	ClapTrap Tank2_dup(Tank2);
	Tank2_dup.attack("Dummy Tank 3");
	Tank2_dup.takeDamage(10);
	Tank2_dup.takeDamage(9);
	Tank2_dup.takeDamage(9);
	Tank2_dup.beRepaired(15);
	Tank2_dup.attack("Dummy Tank 3");
	Tank2_dup.beRepaired(15);
	Tank2_dup.beRepaired(15);
	Tank2_dup.beRepaired(15);
	Tank2_dup.beRepaired(15);
	Tank2_dup.beRepaired(15);
	Tank2_dup.attack("Dummy Tank 3");
	return 0;
}