#ifndef HARL_HPP
#define HARL_HPP
#include <string>
#include <iostream>
#define DEBUGMSG "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!"
#define INFOMSG "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!"
#define WARNINGMSG "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month."
#define ERRORMSG "This is unacceptable! I want to speak to the manager now."

class Harl{

	public:
		void complain( std::string level );
		Harl(void);
		~Harl(void);
		typedef void (Harl::*functionPointer) (void);
	private:
		void debug( void );
		void info( void );
		void warning( void );
		void error( void );
		void f(int b);
};
#endif