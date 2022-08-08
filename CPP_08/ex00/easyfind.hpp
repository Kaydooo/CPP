/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mal-guna <mal-guna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/11 04:39:18 by mal-guna          #+#    #+#             */
/*   Updated: 2022/06/14 06:28:47 by mal-guna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <iostream>
# include <exception>
# include <algorithm>

#define RED "\033[0;31m"
#define GREEN "\033[1;32m"
#define CYAN "\033[0;36m"
#define YELLOW "\033[1;33m"
#define RESET "\033[0m"
class NumberNotFoundException : public std::exception
{
	const char* what() const throw(){return "Element Not Found !";}
};

template<typename T>
void	easyfind(T& a, int& b)
{ 
	typename T::iterator it;
	it = find (a.begin(), a.end(), b);
	if (it != a.end())
		std::cout << "Element found --> " << *it << std::endl;
	else
		throw NumberNotFoundException();
}

#endif /* EASYFIND_HPP */
