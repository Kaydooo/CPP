/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mal-guna <mal-guna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/11 04:39:03 by mal-guna          #+#    #+#             */
/*   Updated: 2022/06/14 09:07:57 by mal-guna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

# include <iostream>
# include <exception>
# include <algorithm>
# include <vector>

#define RED "\033[0;31m"
#define GREEN "\033[1;32m"
#define CYAN "\033[0;36m"
#define YELLOW "\033[1;33m"
#define RESET "\033[0m"

class Span
{

public:
// ----------------------------- Constructors ------------------------------ //
	Span(unsigned int);
	Span(const Span &);
// ------------------------------ Destructor ------------------------------- //
	~Span(void);
// ------------------------------- Operators ------------------------------- //
	Span	&operator=(Span);
// --------------------------------- Methods ------------------------------- //
	void	addNumber(int);
	void	addNumber(std::vector<int>::iterator, std::vector<int>::iterator);
	int		max(void) const;
	int		min(void) const;
	int		longestSpan(void) const;
	int		shortestSpan(void) const;


// --------------------------- Getters && Setters -------------------------- //
	std::vector<int> &getVec();
	unsigned int	&getSize();
// --------------------------------- Exception class ------------------------------- //
	class NoEnoughSpaceInVector: public std::exception
	{
		const char* what() const throw();
	};

	class NoSpanFoundException: public std::exception
	{
		const char* what() const throw();
	};


private:
	unsigned int N;
	std::vector<int> intArray;
	Span(void);
};
void swap(Span& first, Span& second);


#endif /* SPAN_HPP */
