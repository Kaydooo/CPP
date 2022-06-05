/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mal-guna <mal-guna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/03 09:28:49 by mal-guna          #+#    #+#             */
/*   Updated: 2022/06/05 23:41:03 by mal-guna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "Contact.hpp"
class PhoneBook {

public:
// ----------------------------- Constructors ------------------------------ //
	PhoneBook(void);
// ------------------------------ Destructor ------------------------------- //
	~PhoneBook(void);
// --------------------------------- Methods ------------------------------- //
	void	new_contact(std::string *info);
	void	view_contact_table(void) const;
	void	print_contact(int index)const;
	int		search()const;
private:
	Contact Contacts[8];
	int _total;
	int _index;
};

#endif