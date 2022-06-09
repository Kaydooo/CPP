#include "Span.hpp"
#include <vector>
#include <cstdlib>
#include <ctime>

int main() 
{

    Span a(10000);
    std::srand(time(0));
    for(int i = 1; i < 10000; i++)
        a.addNumber(rand() % 15);
    // a.addNumber(1);
    // a.addNumber(6);
    // a.addNumber(15);
    // a.addNumber(20);
    a.printVec();

    try
    {
        std::cout << "Longest Span is = " << a.longestSpan() << std::endl;
        std::cout << "Shortest Span is = " << a.shortestSpan() << std::endl;
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
