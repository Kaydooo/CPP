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
	Span	&operator=(Span&);
// --------------------------------- Methods ------------------------------- //
	void	printVec(void) const;
	void	addNumber(int);
	int		max(void) const;
	int		min(void) const;
	int		longestSpan(void) const;
	int		shortestSpan(void) const;


// --------------------------- Getters && Setters -------------------------- //

// --------------------------------- Exception class ------------------------------- //
	class VectorIsFullException: public std::exception
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


#endif /* SPAN_HPP */
