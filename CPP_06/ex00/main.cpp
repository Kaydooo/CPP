#include "TypeCaster.hpp"

void    print_error(void)
{
    std::cerr << "Wrong Args !" << std::endl;
    exit(EXIT_FAILURE);
}


int main(int argc, char **argv)
{

    if(argc != 2)
        print_error();

    TypeCaster obj(std::string((const char*)argv[1]));
    obj.printNumbers();

    return (0);
}