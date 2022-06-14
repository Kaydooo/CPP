/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mal-guna <mal-guna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/11 04:39:06 by mal-guna          #+#    #+#             */
/*   Updated: 2022/06/14 09:00:52 by mal-guna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


# include "Span.hpp"

// ----------------------------- Constructors ------------------------------ //
Span::Span(void){}
Span::Span(unsigned int size):N(size)
{
	this->intArray.reserve(N);
}
Span::Span(const Span &src): N(src.N)
{
	this->intArray = src.intArray;
}
// ------------------------------ Destructor ------------------------------- //
Span::~Span(){}
// ------------------------------- Operators ------------------------------- //
Span	&Span::operator=(Span rhs)
{
	swap(*this, rhs);
	return *this;
}
// --------------------------------- Methods ------------------------------- //
void	Span::addNumber(int number)
{
	if(intArray.size() >= N)
		throw NoEnoughSpaceInVector();
	intArray.push_back(number);
}

void	Span::addNumber(std::vector<int>::iterator bg, std::vector<int>::iterator en)
{
	if(static_cast<size_t> (en - bg) > (this->N - this->intArray.size()))
		throw NoEnoughSpaceInVector();
	for(std::vector<int>::iterator start = bg; start != en; start++)
		intArray.push_back(*start);
}

int		Span::max() const{return(*(std::max_element(intArray.begin(), intArray.end())));}
int		Span::min() const{return(*(std::min_element(intArray.begin(), intArray.end())));}

int		Span::longestSpan() const
{
	if(intArray.size() == 0 || intArray.size() == 1 )
		throw NoSpanFoundException();
	return(max() - min());
}

int		Span::shortestSpan() const
{
	if(intArray.size() == 0 || intArray.size() == 1 )
		throw NoSpanFoundException();
	std::vector<int> temp(intArray);
	std::sort(temp.begin(), temp.end());
	std::vector<int>::const_iterator it = temp.begin();
	int smallest = *(it + 1) - *it;
	for(it = temp.begin(); it != temp.end(); ++it)
	{
		if((it+1) == temp.end())
			continue;
		int a = *(it + 1) - *it;
		if(a < smallest)
			smallest = a;
	}
	return (smallest);
}

// --------------------------- Getters && Setters -------------------------- //

std::vector<int> &Span::getVec(){return this->intArray;}
unsigned int	&Span::getSize(){return this->N;}

// --------------------------------- Exception class ------------------------------- //

const char* Span::NoEnoughSpaceInVector::what() const throw(){return "No Enough Space !";}
const char* Span::NoSpanFoundException::what() const throw(){return "No Span Possible !";}

/* Freind Functions */

void swap(Span& first, Span& second)
{
	std::swap(first.getSize(), second.getSize());
	std::swap(first.getVec(), second.getVec());
}