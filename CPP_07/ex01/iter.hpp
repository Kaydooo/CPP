#ifndef ITER_HPP
# define ITER_HPP

# include <iostream>

template<typename T> void iter(T *ptr, size_t len, void(f)(T const&))
{
	for(size_t i = 0; i < len; i++)
		f(ptr[i]);
}

template<typename T> void printElem(T& elem)
{
	std::cout << elem << std::endl;
}

#endif /* ITER_HPP */
