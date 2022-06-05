/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mal-guna <mal-guna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/05 23:00:44 by dfurneau          #+#    #+#             */
/*   Updated: 2022/06/05 23:03:23 by mal-guna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include <iostream>

int main(int ac, char **argv)
{
	int i = 1;
	std::string	str;
	
	if (ac == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	else
	{
		while(argv[i])
		{
			str = argv[i];
			for (size_t j = 0; j < str.length(); j++)
			{
				std::cout << static_cast<char> (std::toupper(str[j]));
			}
			i++;
		}
		std::cout << std::endl;
	}
	return (0);
}

