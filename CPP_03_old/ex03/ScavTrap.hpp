#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP
#include "ClapTrap.hpp"

class   ScavTrap : virtual public ClapTrap {

    private:

    public:
        ScavTrap();
        ScavTrap(ScavTrap const &src);
        ~ScavTrap();
        ScavTrap(std::string name);
        ScavTrap const &operator=(ScavTrap const &rhs);

        void    guardGate();
};

#endif