
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include <stdlib.h>
#include <exception>
#include<time.h>

Base * generate(void)
{
    int num = std::rand() % 3;
    std::cout << num << std::endl;
    if(num == 0)
    {
        std::cout << "Generating A Object ..." << std::endl;
        return(new A());
    }
    else if(num == 1)
    {
        std::cout << "Generating B Object ..." << std::endl;
        return(new B());
    }
    else if(num == 2)
    {
        std::cout << "Generating C Object ..." << std::endl;
        return(new C());
    }
    return (NULL);
}
void identify(Base* p)
{
    std::cout << "identify(Base* p): ";
    if(dynamic_cast<A*>(p) != NULL)
        std::cout << "It is an A Object ..." << std::endl;
    else if(dynamic_cast<B*>(p) != NULL)
      std::cout << "It is an B Object ..." << std::endl;
    else if(dynamic_cast<C*>(p) != NULL)
      std::cout << "It is an C Object ..." << std::endl;
}
void identify(Base& p)
{
    std::cout << "identify(Base& p): ";
    try
    {
        dynamic_cast<A&>(p);
        std::cout << "It is an A Object ..." << std::endl;
    }
    catch(std::exception &e)
    {
        // std::cout << "It is not an A Object ..." << std::endl;
    }
    try
    {
        dynamic_cast<B&>(p);
        std::cout << "It is an B Object ..." << std::endl;
    }
    catch(std::exception &e)
    {
        // std::cout << "It is not an B Object ..." << std::endl;
    }
    try
    {
        dynamic_cast<C&>(p);
        std::cout << "It is an C Object ..." << std::endl;
    }
    catch(std::exception &e)
    {
        // std::cout << "It is not an C Object ..." << std::endl;
    }
}

int main()
{
    Base *base_object;
    std::srand(time(0));
    for(int i = 0; i<15; i++)
    {
	    base_object = generate();
        identify(base_object);
        identify(*base_object);
        delete base_object;
    }
    return (0);
}