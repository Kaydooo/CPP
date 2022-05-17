#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP
#include <string>
#include <iostream>

class ClapTrap{

	protected:
		std::string name;
		int			hitpoints;
		int			energypoints;
		int			attackdamage;
	
	public:
	ClapTrap(void);
	ClapTrap(std::string str);
	ClapTrap(ClapTrap const &src);
	ClapTrap &operator=(ClapTrap const &rhs);
	~ClapTrap(void);

	void attack(const std::string& target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
};
#endif