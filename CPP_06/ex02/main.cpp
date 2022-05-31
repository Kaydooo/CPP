
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include <stdlib.h>
#include<time.h>

Base * generate(void)
{
   std::srand(time(0));
   int num = std::rand() % 3;
   std::cout << num << std::endl;
    return(new Base);
}
void identify(Base* p);
void identify(Base& p);

int main()
{
	generate();
    return (0);
}