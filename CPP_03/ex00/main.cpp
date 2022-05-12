/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mal-guna <m3t9mm@gmail.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/12 14:50:07 by mal-guna          #+#    #+#             */
/*   Updated: 2022/05/12 14:50:08 by mal-guna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main(void) {

    ClapTrap tank1;
	ClapTrap tank2("Tank2");
	ClapTrap tank3(tank2);
	tank1.attack("Enemy1");
	tank1.takeDamage(11);
	tank1.attack("Enemy2");
	tank1.beRepaired(2);
	tank1.attack("Enemy3");
	tank2.beRepaired(2);
	tank3.takeDamage(5);
	tank3 = tank1;
	tank3.takeDamage(3);
	return 0;
}