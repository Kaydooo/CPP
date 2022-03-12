#include <Zombie.hpp>

	Zombie::Zombie(void)
	{

	}
	Zombie::~Zombie(void)
	{

	}

	void	Zombie::announce(void)	const
	{
		std::cout << this.name <<": BraiiiiiiinnnzzzZ..." << std::endl;
	}