/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dfurneau <dfurneau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/03 09:30:31 by mal-guna          #+#    #+#             */
/*   Updated: 2022/06/05 22:56:05 by dfurneau         ###   ########.fr       */
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

