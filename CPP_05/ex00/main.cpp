#include "Bureaucrat.hpp"




int main()
{
	Bureaucrat a("M", 1);
	std::cout << a << std::endl;
	Bureaucrat b(a);
	std::cout << b << std::endl;
	Bureaucrat c;
	std::cout << c << std::endl;


	try
	{
	//Bureaucrat  ber("Moatsem", 0);
	Bureaucrat  ber("Moatsem", 150);
	//Bureaucrat  ber("Moatsem", 151);
	std::cout << ber.getGrade() << std::endl;
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}

	try
	{
	Bureaucrat ber1("Moatsem1", 1);
	ber1.incGrade();
	std::cout << ber1.getGrade() << std::endl;
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}

	try
	{
	Bureaucrat ber2("Moatsem2", 150);
	ber2.decGrade();
	std::cout << ber2.getGrade() << std::endl;
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}

	return 0;
}