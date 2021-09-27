/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moharras <moharras@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/14 17:10:14 by moharras          #+#    #+#             */
/*   Updated: 2021/08/31 16:47:08 by moharras         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./DiamondTrap.hpp"

DiamondTrap::DiamondTrap()
{
	std::cout << "Default Constructer Called from DiamondTrap" << std::endl;
}

DiamondTrap::DiamondTrap(std::string Name): FragTrap("FragTrap"), ScavTrap("ScavTrap")
{
	this->_Name = Name;
	ClapTrap::_Name = Name + "_clap_name";
	this->_hitpoints = FragTrap::_hitpoints;
	this->_energyPoints = ScavTrap::_energyPoints;
	this->_attackDamage = FragTrap::_attackDamage;
	// std::cout << "histpoint: " << this->_hitpoints << std::endl;
	// std::cout << "energypoints: " << this->_energyPoints << std::endl;
	// std::cout << "attack damage: " << this->_attackDamage << std::endl;
	ScavTrap::attack("attack from scavTrap");
	// FragTrap::attack("attack from FragTrap");
}

DiamondTrap::DiamondTrap(DiamondTrap const & rhs)
{
	std::cout << "Copy constructor DiamondTrap Called" << std::endl;
	*this = rhs;
}

DiamondTrap&	DiamondTrap::operator=(DiamondTrap const & rhs)
{
	std::cout << "Assignation operator called" << std::endl;
	this->_Name = rhs._Name;
	this->_hitpoints = rhs._hitpoints;
	this->_energyPoints = rhs._energyPoints;
	this->_attackDamage = rhs._attackDamage;
	return (*this);
}

void	DiamondTrap::whoAmI( void )
{
	std::cout << "DiamondTrap name: " << this->_Name << std::endl;
	std::cout << "ClapTrap name: " << ClapTrap::_Name << std::endl;	
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "Destructer Called from DiamondTrap" << std::endl;
}
