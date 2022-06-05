/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mal-guna <mal-guna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/03 09:28:46 by mal-guna          #+#    #+#             */
/*   Updated: 2022/06/05 23:39:53 by mal-guna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

// ----------------------------- Constructors ------------------------------ //
PhoneBook::PhoneBook(void)
{
	this->_index = 0;
	this->_total = 0;
	std::cout << "Phonebook created\n";\
	return ;
}

// ------------------------------ Destructor ------------------------------- //
PhoneBook::~PhoneBook(void)
{
	std::cout << "Phonebook Destoreyd\n";\
	return ;
}

// --------------------------------- Methods ------------------------------- //
void	PhoneBook::new_contact(std::string *info)
{
	this->Contacts[this->_index].set_info(info);
	this->Contacts[this->_index].index = this->_index;
	this->_index++;
	if(this->_total < 8)
		this->_total++;
	if(this->_index == 8)
		this->_index = 0;
}
void	PhoneBook::view_contact_table() const
{
	std::cout << "|\033[1;31m     Index\033[0m|" << \
	"\033[1;31mFirst Name\033[0m|" << "\033[1;31m Last Name\033[0m|" <<"\033[1;31m Nick Name\033[0m|" << std::endl;
	for(int i = 0; i < this->_total; i++)
		this->Contacts[i].print_as_row();
}
void	PhoneBook::print_contact(int index) const
{
	if(index < this->_total && index >= 0)
		this->Contacts[index].print_contact();
	else
		std::cout << "Index Out Of Range !!" << std::endl;
}

int	PhoneBook::search() const
{
	std::string input;
	int index;
	this->view_contact_table();
	std::cout << "Chose an index to print:";
	std::getline (std::cin, input);
	if(std::cin.eof() == 1)
	{
		std::cout << "Ctrl D detected, Exiting the program ...." << std::endl;
		return 1;
	}
	if(input.size() == 0 || input.size() > 1)
	{
		std::cout << "Wrong Index !!" << std::endl;
		return 0;
	}
	for(int j = 0; j < (int)input.size() ;j++)
	{
		if(!isdigit(input[j]))
		{	std::cout << "Wrong Index !!" << std::endl;
			return 0;	
		}
	}
	index = atoi(input.c_str());
	this->print_contact(index);
	return (0);
}