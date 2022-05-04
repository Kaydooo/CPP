#include "DiamondTrap.hpp"


DiamondTrap::DiamondTrap(){
	std::cout << "Constructer Called __ DD" << std::endl;
}
DiamondTrap::DiamondTrap(std::string n):ClapTrap(n + "_clap_name", 100, 50, 30), ScavTrap(n), FragTrap(n){
	name = n;
	std::cout << "Str_par_Constructer Called __ DD" << std::endl;
}

DiamondTrap::~DiamondTrap(){
	std::cout << "Destructer Called __ DD" << std::endl;
}