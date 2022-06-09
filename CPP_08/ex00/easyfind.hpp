#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <iostream>
# include <exception>
# include <algorithm>

class NumberNotFoundException : public std::exception
{
	const char* what() const throw(){return "Not Found !";}
};


template<typename T>
typename	T::iterator	easyfind(T& a, int& b)
{ 
	typename T::iterator it;

	for(it = a.begin() ; it != a.end() ; it++)
	{
		if(*it == b)
			return (it);
	}
	throw NumberNotFoundException();
	
}


#endif /* EASYFIND_HPP */
