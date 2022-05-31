
#include "Serialize.hpp"

uintptr_t serialize(Data* ptr)
{
    return(reinterpret_cast<uintptr_t> (ptr));
}
Data* deserialize(uintptr_t raw)
{

    return(reinterpret_cast<Data*> (raw));
}

int main()
{
    Data *test_struct;
    test_struct = new Data;
    test_struct->dnum = 4.40;
    test_struct->fnum = 4.50f;
    test_struct->num = 2000;
    test_struct->str = "KAYDOOOOOO";

    Data	*test_struct2 = deserialize(serialize(test_struct));
    //test_struct = deserialize(serialize(test_struct));

    std::cout << "int = " << test_struct2->num << std::endl;
    std::cout << "float = " << test_struct2->fnum << std::endl;
    std::cout << "double = " << test_struct2->dnum << std::endl;
    std::cout << "string = " << test_struct2->str << std::endl;
    
    return (0);
}