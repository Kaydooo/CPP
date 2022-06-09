
# include "Span.hpp"


// ----------------------------- Constructors ------------------------------ //
Span::Span(unsigned int size)
{
	this->N = size;
}
Span::Span(const Span &src)
{
	this->N = src.N;
	this->intArray = src.intArray;
}
// ------------------------------ Destructor ------------------------------- //
Span::~Span()
{
}
// ------------------------------- Operators ------------------------------- //
Span	&Span::operator=(Span& rhs)
{
	if(this != &rhs)
	{
		rhs.intArray.resize(this->N);
		rhs.N = this->N;
		for(unsigned int i = 0; i < this->N; i++)
		{
			rhs.intArray[i] = this->intArray[i];
		}
	}
	return *this;
}
// --------------------------------- Methods ------------------------------- //
void	Span::addNumber(int number)
{
	if(intArray.size() >= N)
		throw VectorIsFullException();
	
	intArray.push_back(number);
}

void	Span::printVec() const
{
	std::vector<int>::const_iterator it;
	for(it = intArray.begin(); it != intArray.end(); ++it)
		std::cout << *it << std::endl;
}

int		Span::max() const
{
	return(*(std::max_element(intArray.begin(), intArray.end())));
}
int		Span::min() const
{
	return(*(std::min_element(intArray.begin(), intArray.end())));
}

int		Span::longestSpan() const
{
	if(intArray.size() == 0 || intArray.size() == 1 )
		throw NoSpanFoundException();

	return(max() - min());
}
int		Span::shortestSpan() const
{
	// std::cout << "size is = " << intArray.size() << " ";
	if(intArray.size() == 0 || intArray.size() == 1 )
		throw NoSpanFoundException();
	std::vector<int> temp(intArray);
	std::sort(temp.begin(), temp.end());
	
	// int x1 = temp[temp.size() - 1] - temp[temp.size() - 2];
	// int x2 = temp[1] - temp[0];
	// std::cout << "X1 = " << x1 << std::endl;
	// std::cout << "X2 = " << x2 << std::endl;
	int smallest = temp[1] - temp[0];
	for(unsigned int i = 0; i < intArray.size() - 1; i++)
	{
		int a = temp[i + 1] - temp[i];
		if(a < smallest)
			smallest = a;
	}
	return (smallest);
}

// --------------------------- Getters && Setters -------------------------- //

// --------------------------------- Exception class ------------------------------- //
const char* Span::VectorIsFullException::what() const throw()
{
	return "Vector is full !";
}
const char* Span::NoSpanFoundException::what() const throw()
{
	return "No Span !";
}
