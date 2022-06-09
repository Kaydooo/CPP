#include "easyfind.hpp"
#include <vector>

int main() 
{
    std::vector<int> g1;
    for (int i = 1; i <= 5; i++)
        g1.push_back(i);
    int num = 3;
    try
    {
        std::vector<int>::iterator it = easyfind(g1, num);
        std::cout << *it << std::endl;
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
    
    // std::vector<int>::iterator
    // std::cout << "Output is ---> " << easyfind<int>(g1, 5) << std::endl;
    return 0;
}
