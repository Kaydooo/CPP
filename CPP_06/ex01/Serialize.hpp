#ifndef SERIALIZE_HPP
#define SERIALIZE_HPP

# include <iostream>
# include <stdint.h>


struct Data
{
    int num;
    float fnum;
    double dnum;
    std::string str;
}; 

uintptr_t serialize(Data* ptr);
Data* deserialize(uintptr_t raw);

#endif