#include "TypeCaster.hpp"

// ----------------------------- Constructors ------------------------------ //
TypeCaster::TypeCaster()
{
	// std::cout << GREEN << "Default Constructor Called TypeCaster()" << RESET << std::endl;
}

TypeCaster::TypeCaster(std::string n)
{
	input = n;
	this->setType();
	// std::cout << GREEN << "Fields Constructor Called TypeCaster(std::string in_Type)" << RESET << std::endl;
}

TypeCaster::TypeCaster(const TypeCaster& c)
{
	*this = c;
	// std::cout << GREEN << "Copy Constructor Called TypeCaster()" << RESET << std::endl;
}


// ------------------------------ Destructor ------------------------------- //
TypeCaster::~TypeCaster()
{
	// std::cout << RED << "Destructor Called ~TypeCaster()" << RESET << std::endl;
}
// ------------------------------- Operators ------------------------------- //

TypeCaster & TypeCaster::operator=(const TypeCaster& c)
{
	this->type = c.type;
	this->input= c.input;
	// std::cout << GREEN << "Copy Assignment Operator TypeCaster()" << RESET << std::endl;
	return *this;
}

// --------------------------- Getters && Setters -------------------------- //


// --------------------------------- Methods ------------------------------- //

void		TypeCaster::setType()
{
	if(input.length() == 1)
	{
		if(isdigit(input[0]))
		{
			type = I_I;
			std::cout << "its digit !" << std::endl;
		}
		else
		{
			type = I_C;
			std::cout << "its char !" << std::endl;
		}
	}
	else if(!input.compare("nan") || !input.compare("+inf") || !input.compare("-inf") )
	{
		type = I_D;
		std::cout << "its double" << std::endl;
	}
	else if(input[input.length() - 1] == 'f')
	{
		std::cout << "its float !" << std::endl;
		type = I_F;
	}
	else if(input.find(".") != std::string::npos)
	{
		type = I_D;
		std::cout << "its double" << std::endl;
	}
	else
	{
		type = I_I;
		std::cout << "Its Int " << std::endl;
	}
}

void	TypeCaster::printNumbers()
{
	if(type == I_C)
		printC();
	else if(type == I_I)
		printI();
	else if(type == I_F)
		printF();
	else if(type == I_D)
		printD();
}

void	TypeCaster::printC()
{
	char value = input[0];
	if(isprint(value))
		std::cout << "Char: " << value << std::endl;
	else
	std::cout << "Int: " << static_cast<int> (value) << std::endl;
	std::cout << std::fixed << std::setprecision(1) << "Float: " << static_cast<float>(value) << "f" << std::endl;
	std::cout << "Double: " << static_cast<double> (value) << std::endl;
}

void	TypeCaster::printI()
{
	int value = atoi(input.c_str());
	//char
	if(value >= -128 && value <= 127)
	{
		if(isprint(value))
			std::cout << "Char: " << static_cast<char>(value) << std::endl;
		else
			std::cout << "Char: Not Printable" << std::endl;	
	}
	else
	{
		std::cout << "Char: Impossible" << std::endl;	
	}
	//int
	std::cout << "Int: " << value << std::endl;
	//float
	std::cout << std::fixed << std::setprecision(1) << "Float: " << static_cast<float> (value) << "f" << std::endl;
	//double
	std::cout << std::fixed << std::setprecision(1) << "Double: " << static_cast<double> (value) << std::endl;

}
void	TypeCaster::printF()
{
	float value = atof(input.c_str());
	//char
	if(value >= -128 && value <= 127)
	{
		if(isprint(static_cast<char>(value)))
			std::cout << "Char: " << static_cast<char>(value) << std::endl;
		else
			std::cout << "Char: Not Printable" << std::endl;	
	}
	else
	{
		std::cout << "Char: Impossible" << std::endl;	
	}
	//int
	if (value >= INT_MIN && value <= INT_MAX)
	{
		std::cout << "Int: " << static_cast<int> (value) << std::endl;
	}
	else
	{
		std::cout << "int: Impossible" << std::endl;
	}
	//float
	std::cout << std::fixed << std::setprecision(1) << "Float: " << value << "f" << std::endl;
	//double
	std::cout << std::fixed << std::setprecision(1) << "Double: " << static_cast<double> (value) << std::endl;
}
void	TypeCaster::printD()
{
	double value = atof(input.c_str());
	//char
	if(value >= -128 && value <= 127)
	{
		if(isprint(static_cast<char>(value)))
			std::cout << "Char: " << static_cast<char>(value) << std::endl;
		else
			std::cout << "Char: Not Printable" << std::endl;	
	}
	else
	{
		std::cout << "Char: Impossible" << std::endl;	
	}
	//int
	if (value >= INT_MIN && value <= INT_MAX)
	{
		std::cout << "Int: " << static_cast<int> (value) << std::endl;
	}
	else
	{
		std::cout << "Int: Impossible" << std::endl;
	}
	//float
	std::cout << std::fixed << std::setprecision(1) << "Float: " << static_cast<float> (value) << "f" << std::endl;
	//double
	std::cout << std::fixed << std::setprecision(1) << "Double: " << value << std::endl;
}