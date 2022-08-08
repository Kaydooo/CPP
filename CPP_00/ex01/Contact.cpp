/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mal-guna <mal-guna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/03 09:28:37 by mal-guna          #+#    #+#             */
/*   Updated: 2022/07/31 23:37:07 by mal-guna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact(void) { return; }

Contact::~Contact(void) { return; }

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
	std::cout << "|" << std::setw(10) << this->index;
	int size = this->firstname.size();
	if(size > 10)
		std::cout << "|" << std::setw(9) << firstname.substr(0,9) << ".";
	else
		std::cout << "|" << std::setw(10) << firstname;
	size = this->lastname.size();
	if(size > 10)
		std::cout << "|" << std::setw(9) << lastname.substr(0,9) << ".";
	else
		std::cout << "|" << std::setw(10) << lastname;
	size = this->nickname.size();
	if(size > 10)
		std::cout << "|" << std::setw(9) << nickname.substr(0,9) << ".";
	else
		std::cout << "|" << std::setw(10) << nickname;
	std::cout << "|" << std::endl;
}