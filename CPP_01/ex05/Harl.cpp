#include "Harl.hpp"

	Harl::Harl(void)
	{
		std::cout << "Harl Object Created" << std::endl;

	}
	Harl::~Harl(void)
	{
		std::cout << "Harl Object Destoryed" << std::endl;
	}
	void Harl::debug( void )
	{
		std::cout <<  DEBUGMSG << std::endl;
	}
	void Harl::info( void )
	{
		std::cout << INFOMSG << std::endl;
	}
	void Harl::warning( void )
	{
		std::cout << WARNINGMSG << std::endl;
	}
	void Harl::error( void )
	{
		std::cout << ERRORMSG << std::endl;
	}
 	void Harl::f(int b) {
    std::cout << "The value of b is "<< b << std::endl;
  	}
	void Harl::complain( std::string level )
	{
		functionPointer fun[4] = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
		std::string levels[4] = {"debug", "info", "warning", "error"};
		for(int i = 0; i < 4; i++)
		{
			if(!levels[i].compare(level))
			{
				(this->*fun[i])();
				break;
			}
			if(i == 3)
				std::cout << "Level Was not found !" << std::endl;
		}
	}
