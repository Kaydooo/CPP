#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP
#include "ClapTrap.hpp"

#define RED "\033[0;31m"
#define GREEN "\033[1;32m"
#define CYAN "\033[0;36m"
#define YELLOW "\033[1;33m"
#define RESET "\033[0m"
class   FragTrap : virtual public ClapTrap {

    private:

    public:
            FragTrap();
            FragTrap(std::string name);
            FragTrap(FragTrap const &src);
            ~FragTrap();
            FragTrap &operator=(FragTrap const &rhs);
            void highFivesGuys(void);
};

#endif