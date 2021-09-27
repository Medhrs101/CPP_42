/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moharras <moharras@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/14 12:46:00 by moharras          #+#    #+#             */
/*   Updated: 2021/07/18 17:56:44 by moharras         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP
#include "./ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap
{
public:
    ScavTrap();
    ScavTrap(std::string Name);
    ScavTrap(ScavTrap const & rhs);
	ScavTrap&	operator=(ScavTrap const & rhs);
    ~ScavTrap();
    void    attack(std::string const & target);
    void    guardGate( void );
};

#endif
