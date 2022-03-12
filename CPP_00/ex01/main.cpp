/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mal-guna <m3t9mm@gmail.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/03 09:28:43 by mal-guna          #+#    #+#             */
/*   Updated: 2022/03/12 22:06:05 by mal-guna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int	search(PhoneBook *phonebook)
{
	std::string input;
	int index;
	phonebook->view_contact_table();
	std::cout << "Chose an index to print:";
	std::getline (std::cin, input);
	if(std::cin.eof() == 1)
	{
		std::cout << "Ctrl D detected, Exiting the program ...." << std::endl;
		return 1;
	}
	if(input.size() == 0)
	{
		std::cout << "Wrong Index !!" << std::endl;
		return 0;
	}
	for(int j = 0; j < (int)input.size() ;j++)
	{
		if(!isnumber(input[j]))
		{	std::cout << "Wrong Index !!" << std::endl;
			return 0;	
		}
	}
	index = atoi(input.c_str());
	phonebook->print_contact(index);
	return (0);

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
	for(int i = 0; i<5; i++)
	{
		if(info[i].size() == 0)
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
	
	while(1)
	{
		std::getline (std::cin, input);
		if(!input.compare("ADD"))
			add_contact(&phonebook);
		else if(!input.compare("SEARCH"))
		{
			if(search(&phonebook))
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
			std::cout << "Wrong Command.. The program only accepts ADD, SEARCH and EXIT" << std::endl;
	}
	return (0);
}
