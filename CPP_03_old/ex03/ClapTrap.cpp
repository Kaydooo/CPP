#include "ClapTrap.hpp"
	
	ClapTrap::ClapTrap():name("Default"), hitpoints(10),energypoints(10), attackdamage(0){
		std::cout << "Clap Trap Default Constructor Called __ CC" << std::endl;
	}
	ClapTrap::ClapTrap(std::string str): name(str), hitpoints(10),energypoints(10), attackdamage(0){

		std::cout << "Clap Trap Constructor Called __ CC" << std::endl;
	}

	ClapTrap::ClapTrap(std::string str, int hp, int ep, int ad): name(str), hitpoints(hp),energypoints(ep), attackdamage(ad){
		std::cout << "Clap Trap  Parmaters_Constructor Called __ CC" << std::endl;
	}

	ClapTrap::ClapTrap(ClapTrap const &src):name(src.name), hitpoints(src.hitpoints), energypoints(src.energypoints), attackdamage(src.attackdamage){
		std::cout << "Clap Trap Copy Constructor Called __ CC" << std::endl;
	}
	
	ClapTrap::~ClapTrap(){
		std::cout << "Clap Trap Destructor Called __ CC" << std::endl;
	}
	ClapTrap &ClapTrap::operator=(ClapTrap const &rhs){
		name = rhs.name;
		hitpoints = rhs.hitpoints;
		energypoints = rhs.energypoints;
		attackdamage = rhs.attackdamage;
		return (*this);
	}
	void ClapTrap::attack(const std::string& target){
		if(energypoints > 0 && hitpoints > 0)
		{
			std::cout << name << ": Attacked " << target << " with " << this->attackdamage << " Damage" << std::endl;
			energypoints--;
		}
		else
		{
			std::cout << name << ": there is no Enegry/Hit points" << std::endl;
		}	
		 std::cout << "Energy points : " << energypoints << std::endl << "Hit Points :    " << hitpoints << std::endl; 
	}

	void ClapTrap::takeDamage(unsigned int amount){
		if(hitpoints > 0)
		{
			hitpoints -= amount;
			std::cout << name << ": has taken " << amount << " Damage !" << std::endl; 
			if(hitpoints < 0)
				std::cout << name << ": Is dead from this damage !" << std::endl;
		}
		else
			std::cout << name << ": Already Dead !" << std::endl;
		if(hitpoints < 0)
			hitpoints = 0;
	}

	void ClapTrap::beRepaired(unsigned int amount){
		if(energypoints > 0)
		{
			hitpoints += amount;
			energypoints--;
			std::cout << name << ": Healed amount of " << amount << " using 1 Energy Point !" <<  std::endl;
		}
		else{
			std::cout << name << ": there is no Energy points left" << std::endl;
		}
			// std::cout << "Energy points : " << energypoints << std::endl << "Hit Points :    " << hitpoints << std::endl; 

	}
