/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moharras <moharras@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/10 18:31:16 by moharras          #+#    #+#             */
/*   Updated: 2021/08/31 16:31:29 by moharras         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP
#include <iostream>

class ClapTrap
{
private:
	std::string _Name;
	int         _hitpoints;
	int         _energyPoints;
	int         _attackDamage;

public:
	ClapTrap();
	ClapTrap(std::string Name);
	ClapTrap(ClapTrap const & rhs);
	ClapTrap&	operator=(ClapTrap const & rhs);
	~ClapTrap();
	void	attack(std::string const & target);
	void	takeDamage(unsigned int amount);
	void	beRepaired(unsigned int amount);
};

#endif
