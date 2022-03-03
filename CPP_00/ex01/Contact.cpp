/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mal-guna <mal-guna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/03 09:28:37 by mal-guna          #+#    #+#             */
/*   Updated: 2022/03/03 09:28:38 by mal-guna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact(void)
{
	return;
}

Contact::~Contact(void)
{
	return;
}

void	Contact::set_info(std::string info[5])
{
	this->firstname = info[0];
	this->lastname = info[1];
	this->nickname = info[2];
	this->phonenumber = info[3];
	this->darkestsecret = info[4];
}
void	Contact::print_contact(void) const
{
	std::cout << "First Name     --> " << firstname << std::endl;
	std::cout << "Last Name      --> " << lastname << std::endl;
	std::cout << "Nick Name      --> " << nickname << std::endl;
	std::cout << "Phone Number   --> " << phonenumber << std::endl;
	std::cout << "Darkest Secret --> " << darkestsecret << std::endl;
}

void	Contact::print_as_row(void) const
{
	std::cout << "|         " << this->index;
	int size = this->firstname.size();
	if (size <=10)
	{	
		std::cout << "|";
		this->print_spaces(10-size);
		std::cout << this->firstname;
	}
	else
	{
		std::cout << "|";
		for(int i = 0; i < 9; i++)
			std::cout << firstname[i];
		std::cout << ".";
	}
	size = this->lastname.size();
	if (size <=10)
	{	
		std::cout << "|";
		this->print_spaces(10-size);
		std::cout << this->lastname;
	}
	else
	{
		std::cout << "|";
		for(int i = 0; i < 9; i++)
			std::cout << lastname[i];
		std::cout << ".";
	}
	size = this->nickname.size();
	if (size <= 10)
	{	
		std::cout << "|";
		this->print_spaces(10-size);
		std::cout << this->nickname;
		std::cout << "|";
	}
	else
	{
		std::cout << "|";
		for(int i = 0; i < 9; i++)
			std::cout << nickname[i];
		std::cout << ".|";
	}
	std::cout << std::endl;
}

void	Contact::print_spaces(int n) const
{
	for(int i = 0; i < n; i++)
		std::cout << " ";
}