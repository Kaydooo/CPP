#ifndef	WEAPON_HPP
#define WEAPON_HPP
#include <string>
#include <iostream>
class	Weapon{

	public:
		Weapon(void);
		~Weapon(void);
		Weapon(std::string weaponType);
		const std::string &getType();
		void	setType(std::string newType);
	private:
		std::string _type;
};

#endif