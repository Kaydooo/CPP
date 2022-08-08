/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mal-guna <mal-guna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/03 09:28:40 by mal-guna          #+#    #+#             */
/*   Updated: 2022/07/31 23:37:18 by mal-guna         ###   ########.fr       */
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