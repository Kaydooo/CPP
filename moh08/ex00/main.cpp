/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mal-guna <mal-guna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/11 04:39:20 by mal-guna          #+#    #+#             */
/*   Updated: 2022/06/14 06:44:38 by mal-guna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <vector>
#include <list>

int main() 
{
    std::vector<int> v1;
    std::list<int> l1;
    
    for (int i = 1; i <= 5; i++)
        v1.push_back(i);
    for (int i = 1; i <= 5; i++)
        l1.push_back(i);
    int num = 4;
    int num2 = 10;
    try
    {
        std::cout << CYAN << "Vector : ";
        easyfind(v1, num);
        std::cout << RESET;
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << RESET << std::endl;
    }
    try
    {
        std::cout << GREEN << "List : ";
        easyfind(l1, num2);
        std::cout << RESET;
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << RESET << std::endl;
    }
    
    return 0;
}
