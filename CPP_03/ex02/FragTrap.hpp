/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mal-guna <m3t9mm@gmail.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 10:30:36 by mal-guna          #+#    #+#             */
/*   Updated: 2022/05/19 10:30:37 by mal-guna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP
#include "ClapTrap.hpp"

class   FragTrap : public ClapTrap {

    public:
            FragTrap();
            ~FragTrap();
            FragTrap(std::string name);
            FragTrap(FragTrap const &src);
            FragTrap &operator=(FragTrap const &rhs);
            void highFivesGuys(void);
};

#endif