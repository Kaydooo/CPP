/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mal-guna <mal-guna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/11 04:39:12 by mal-guna          #+#    #+#             */
/*   Updated: 2022/06/11 04:39:13 by mal-guna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include <cstdlib>
#include <ctime>

int main() 
{
    Span a(10000);
    std::srand(time(0));
    for(int i = 0; i < 10000; i++)
        a.addNumber(rand() % 15);
    std::vector<int> b;
    b.push_back(20);
    b.push_back(3);
    b.push_back(5);
    b.push_back(6);
    try
    {
        Span x(5);
        x.addNumber(20);
        x.addNumber(b.begin(), b.end());
        std::cout << "Longest Span is = " << x.longestSpan() << std::endl;
        std::cout << "Shortest Span is = " << x.shortestSpan() << std::endl;
        x.printVec();
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    /* Error Checking */
    std::cout << RED << "---------Error Checking---------" << RESET << std::endl;

    /* 1- Add Number When Full */
    std::cout << CYAN << std::endl << "---------1- Add Number When Full---------" << RESET << std::endl;
    try
    {
        Span c(2);
        c.addNumber(42);
        c.addNumber(55);
        c.addNumber(22);

    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    /* 2- Find  span for vector with elem <=1  */
    std::cout << CYAN << std::endl << "---------2- Find Span When empty---------" << RESET << std::endl;
    try
    {
        Span b(20);
        b.addNumber(10);
        std::cout << "Longest Span is = " << b.longestSpan() << std::endl;
        std::cout << "Shortest Span is = " << b.shortestSpan() << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    return 0;
}
