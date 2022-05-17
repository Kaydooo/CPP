#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap
{

	private:
		std::string name;
	public:
		DiamondTrap();
		DiamondTrap(std::string n);
		DiamondTrap(DiamondTrap const &src);
		DiamondTrap const &operator=(DiamondTrap const &rhs);
		~DiamondTrap();

		using ScavTrap::attack;
		void	whoAmI();
		void	print_status(void);
};

#endif