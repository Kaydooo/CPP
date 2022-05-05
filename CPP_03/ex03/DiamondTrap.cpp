#include "DiamondTrap.hpp"


DiamondTrap::DiamondTrap():ClapTrap("Default_clap_name", 100, 50, 30), ScavTrap(), FragTrap(){
	name = "Default";
	std::cout << "Diamond Trap : Constructer Called __ DD" << std::endl;
}
DiamondTrap::DiamondTrap(std::string n):ClapTrap(n + "_clap_name", 100, 50, 30), ScavTrap(), FragTrap(){
	name = n;
	std::cout << "Diamond Trap : Str_par_Constructer Called __ DD" << std::endl;
}
DiamondTrap::DiamondTrap(DiamondTrap const &src): ClapTrap(src.name + "clap_name", 100, 50, 30), ScavTrap(), FragTrap(){
	name = src.name;
}
DiamondTrap const &DiamondTrap::operator=(DiamondTrap const &rhs){
	name = rhs.name;
	ClapTrap::operator=(rhs);
	return *this;
}
DiamondTrap::~DiamondTrap(){
	std::cout << "Diamond Trap : Destructer Called __ DD" << std::endl;
}

void	DiamondTrap::whoAmI(){

	std::cout<< "Diamond Trap Name is : " << name << " and Clap Trap name is "<< ClapTrap::name << std::endl;
}

//void	Dimond