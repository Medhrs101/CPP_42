/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moharras <moharras@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/11 14:28:02 by moharras          #+#    #+#             */
/*   Updated: 2021/08/31 16:31:47 by moharras         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
	std::cout << "Default Constructer Called from ClapTrap" << std::endl;
}

ClapTrap::ClapTrap(std::string Name): _Name(Name), _hitpoints(10), _energyPoints(10), _attackDamage(0)
{
	std::cout << "Parametrized Constructer Called from ClapTrap" << std::endl;
}

ClapTrap::ClapTrap(ClapTrap const & rhs)
{
	std::cout << "Copy constructor Called from ClapTrap" << std::endl;
	*this = rhs;
}

ClapTrap&	ClapTrap::operator=(ClapTrap const & rhs)
{
	std::cout << "Assignation operator called" << std::endl;
	this->_Name = rhs._Name;
	this->_hitpoints = rhs._hitpoints;
	this->_energyPoints = rhs._energyPoints;
	this->_attackDamage = rhs._attackDamage;
	return (*this);
}

ClapTrap::~ClapTrap()
{
	std::cout << "Destructer ClapTrap Called" << std::endl;
}

void    ClapTrap::attack(std:: string const & target)
{
	std::cout << "ClapTrap <" << this->_Name << "> attacks <" << target << ">, causing <" << this->_attackDamage << "> points of damage!" << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	std::cout << "takeDamage Called with amount: " << amount << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	std::cout << "beRepaired Called with amount: " << amount << std::endl;
}
