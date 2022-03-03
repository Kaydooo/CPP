/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mal-guna <mal-guna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/03 09:30:31 by mal-guna          #+#    #+#             */
/*   Updated: 2022/03/03 09:39:34 by mal-guna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(int ac, char **argv)
{
	int i = 1;
	int j = 0;

	if (ac == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	else
	{
		while(argv[i])
		{
			j = 0;
			while(argv[i][j])
			{
				if(argv[i][j] >= 97 && argv[i][j] <= 122)
					std::cout << (char)(argv[i][j] - 32);
				else
					std::cout << (char)(argv[i][j]);
				j++;
			}
			i++;
		}
		std::cout << std::endl;
	}
	return (0);
}