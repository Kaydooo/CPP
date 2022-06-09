/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mal-guna <m3t9mm@gmail.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/03 09:28:43 by mal-guna          #+#    #+#             */
/*   Updated: 2022/06/06 17:00:02 by mal-guna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

static void	subMenu(PhoneBook *phonebook)
{
	std::string info[5];
	int			err;

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
	for(int i = 0; i<5; i++)
	{
		err = 1;
		for(size_t j = 0; j < info[i].length(); j++)
		{
			if(!isspace(info[i][j]))
				err = 0;
		}
		if(info[i].size() == 0 || err)
		{
			std::cout << "You have 1 empty input" << std::endl;
			return ;
		}
	}
	phonebook->new_contact(info);
}

int main()
{
	PhoneBook phonebook;
	std::string input;
	std::cout << "Enter One of the following Commands [ADD, SEARCH, EXIT]" << std::endl;
	std::cout << "-------------------------------------------------------" << std::endl;
	
	while(std::getline (std::cin, input))
	{
		if(input == "ADD")
			subMenu(&phonebook);
		else if(!input.compare("SEARCH"))
		{
			if(phonebook.search())
				return (0);
		}	
		else if(!input.compare("EXIT"))
		 	return (0);
		else if(std::cin.eof() == 1)
		{
			std::cout << "Ctrl D detected, Exiting the program ...." << std::endl;
			return (0);
		}
		else
			std::cout << "Wrong Command.. ";
	std::cout << "Enter One of the following Commands [ADD, SEARCH, EXIT]" << std::endl;
	}
	return (0);
}
