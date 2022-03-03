/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mal-guna <mal-guna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/03 09:28:49 by mal-guna          #+#    #+#             */
/*   Updated: 2022/03/03 09:28:50 by mal-guna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "Contact.hpp"
class PhoneBook {

public:
	PhoneBook(void);
	~PhoneBook(void);
	void	new_contact(std::string *info);
	void	view_contact_table(void) const;
	void	print_contact(int index)const ;

private:
	Contact Contacts[8];
	int _total;
	int _index;

};

#endif