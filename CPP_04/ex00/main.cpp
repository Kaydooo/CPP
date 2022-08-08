/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mal-guna <mal-guna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/24 20:23:59 by mal-guna          #+#    #+#             */
/*   Updated: 2022/08/01 03:11:49 by mal-guna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"

int main()
{
    const Animal* meta = new Animal();
    const Animal* j = new Dog();
    const Animal* i = new Cat();
    const Animal* cat = new Cat();

    std::cout << j->get_Type() << " " << std::endl;
    std::cout << i->get_Type() << " " << std::endl;

    i->makeSound(); //will output the cat sound!
    j->makeSound();//will output the Dog sound!
    meta->makeSound();//will output animal sound
    cat->makeSound();

    const WrongAnimal* wc = new WrongCat();

    wc->makeSound();

    std::cout << meta->get_Type() << " " << std::endl;
    std::cout << cat->get_Type() << " " << std::endl;

    delete meta;
    delete j;
    delete i;
    delete wc;
    delete cat;

    return 0;
}