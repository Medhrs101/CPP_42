/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moharras <moharras@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/14 17:08:19 by moharras          #+#    #+#             */
/*   Updated: 2021/07/16 15:50:49 by moharras         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP
#include "./FragTrap.hpp"
#include "./ScavTrap.hpp"
#include "./ClapTrap.hpp"

class DiamondTrap: public FragTrap, public ScavTrap
{
private:
	std::string _Name;
public:
	DiamondTrap(/* args */);
	DiamondTrap(DiamondTrap const & rhs);
	DiamondTrap&	operator=(DiamondTrap const & rhs);
	DiamondTrap(std::string Name);
	~DiamondTrap();
	void	whoAmI( void );
};

#endif
