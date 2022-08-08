/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mal-guna <m3t9mm@gmail.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/24 20:26:51 by mal-guna          #+#    #+#             */
/*   Updated: 2022/05/24 20:26:52 by mal-guna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"
#include "Cure.hpp"
#include "MateriaSource.hpp"
#include "Character.hpp"



int main()
{
	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	ICharacter* me = new Character("me");
	AMateria* tmp;
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);
	ICharacter* bob = new Character("bob");
	me->use(0, *bob);
	me->use(1, *bob);
	me->unequip(1);
	me->unequip(10);
	me->unequip(0);
	src->learnMateria(new Cure());
	tmp = src->createMateria("cure");
	me->equip(tmp);
	tmp = src->createMateria("new");
	me->equip(tmp);
	me->use(0, *bob);
	me->use(1, *bob);
	me->use(1, *bob);
	// me->unequip()
	//tmp = src->createMateria("cure");

	delete bob;
	delete me;
	delete src;
	return 0;
}