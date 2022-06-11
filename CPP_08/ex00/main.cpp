/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mal-guna <mal-guna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/11 04:39:20 by mal-guna          #+#    #+#             */
/*   Updated: 2022/06/11 04:39:21 by mal-guna         ###   ########.fr       */
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
    int num = 55;
    try
    {
        easyfind(v1, num);
    }
    catch (std::exception &e)
    {
        std::cout << CYAN << "Vector : " << e.what() << RESET << std::endl;
    }
    try
    {
        easyfind(l1, num);
    }
    catch (std::exception &e)
    {
        std::cout << GREEN << "List : " << e.what() << RESET << std::endl;
    }
    
    return 0;
}
