/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mal-guna <m3t9mm@gmail.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 10:30:47 by mal-guna          #+#    #+#             */
/*   Updated: 2022/05/19 10:30:49 by mal-guna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP
#include "ClapTrap.hpp"

class   ScavTrap : public ClapTrap {

    public:
            ScavTrap();
            ~ScavTrap();
            ScavTrap(std::string name);
            ScavTrap(ScavTrap const &src);
	        ScavTrap &operator=(ScavTrap const &rhs);
             
            void attack(const std::string& target);
            void    guardGate();
};

#endif