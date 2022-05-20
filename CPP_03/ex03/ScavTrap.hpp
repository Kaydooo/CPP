/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mal-guna <m3t9mm@gmail.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/17 07:28:25 by mal-guna          #+#    #+#             */
/*   Updated: 2022/05/19 10:31:39 by mal-guna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP
#include "ClapTrap.hpp"

#define RED "\033[0;31m"
#define GREEN "\033[1;32m"
#define CYAN "\033[0;36m"
#define YELLOW "\033[1;33m"
#define RESET "\033[0m"

class   ScavTrap : virtual public ClapTrap {

    private:

    public:
        ScavTrap();
        ScavTrap(ScavTrap const &src);
        ~ScavTrap();
        ScavTrap(std::string name);
        
        void attack(const std::string& target);
        ScavTrap &operator=(ScavTrap const &rhs);

        void    guardGate();
};

#endif