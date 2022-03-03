/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mal-guna <mal-guna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/03 09:28:43 by mal-guna          #+#    #+#             */
/*   Updated: 2022/03/03 09:28:44 by mal-guna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

void	search(PhoneBook *phonebook)
{
	std::string input;
	int index;
	phonebook->view_contact_table();
	std::cout << "Chose an index to print:";
	std::getline (std::cin, input);
	index = atoi(input.c_str());
	phonebook->print_contact(index);

}
void	add_contact(PhoneBook *phonebook)
{
	std::string info[5];

	std::cout << "Enter First Name : ";
	std::getline (std::cin, info[0]);
	std::cout << "Enter Last Name : ";
	std::getline (std::cin, info[1]);
	std::cout << "Enter Nick Name : ";
	std::getline (std::cin, info[2]);
	std::cout << "Enter Phone Number : ";
	std::getline (std::cin, info[3]);
	std::cout << "Enter Darkest Secert : ";
	std::getline (std::cin, info[4]);
	phonebook->new_contact(info);
}

int main()
{
	PhoneBook phonebook;
	std::string input;
	while(1)
	{
		std::getline (std::cin, input);
		if(!input.compare("ADD"))
			add_contact(&phonebook);
		else if(!input.compare("SEARCH"))
			search(&phonebook);
		else if(!input.compare("EXIT"))
		 	return (0);
		else
			std::cout << "Wrong Command.. The program only accepts ADD, SEARCH and EXIT" << std::endl;
	}

	return (0);
}
