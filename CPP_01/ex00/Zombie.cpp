#include "Zombie.hpp"

	Zombie::Zombie(std::string name)
	{
		this->_name = name;
		std::cout << this->_name << ": Zombie Spwaned ..." << std::endl;
	}
	
	Zombie::Zombie(void)
	{
		std::cout << this->_name << ": Zombie Spwaned ..." << std::endl;
	}

	Zombie::~Zombie(void)
	{
		std::cout << this->_name << ": Zombie Killed ..." << std::endl;
	}

	void	Zombie::announce(void)	const
	{
		std::cout << this->_name <<": BraiiiiiiinnnzzzZ..." << std::endl;
	}