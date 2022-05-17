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
	ClapTrap(std::string n, int hp, int ep, int ad);
	ClapTrap(ClapTrap const &src);
	ClapTrap &operator=(ClapTrap const &rhs);
	~ClapTrap(void);

	void attack(const std::string& target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
};
#endif