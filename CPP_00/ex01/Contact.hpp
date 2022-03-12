/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mal-guna <m3t9mm@gmail.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/03 09:28:40 by mal-guna          #+#    #+#             */
/*   Updated: 2022/03/12 20:43:43 by mal-guna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP
#include <string>
#include <iomanip>
#include <stdlib.h>
#include <iostream>
class Contact
{

public:
	int index;
	Contact(void);
	~Contact(void);
	void	set_info(std::string info[5]);
	void	print_as_row(void) const;
	void	print_contact(void) const;

private:
	std::string firstname;
	std::string lastname;
	std::string nickname;
	std::string phonenumber;
	std::string darkestsecret;
};


#endif