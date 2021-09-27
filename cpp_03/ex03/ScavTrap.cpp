/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moharras <moharras@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/14 12:47:09 by moharras          #+#    #+#             */
/*   Updated: 2021/07/18 18:23:57 by moharras         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./ScavTrap.hpp"

ScavTrap::ScavTrap(/* args */)
{
    std::cout << "Constructor ScavTrap Called" << std::endl;
}

ScavTrap::ScavTrap(std::string Name)
{
	std::cout << "Parametrize constructer ScavTrap Called" << std::endl;
    this->_Name = Name;
    // this->_hitpoints = 100;
    this->_energyPoints = 50;
    // this->_attackDamage = 20;
}

ScavTrap::ScavTrap(ScavTrap const & rhs)
{
	std::cout << "Copy constructor Called from ScavTrap" << std::endl;
	*this = rhs;
}

ScavTrap&	ScavTrap::operator=(ScavTrap const & rhs)
{
	std::cout << "Assignation operator called" << std::endl;
	this->_Name = rhs._Name;
	this->_hitpoints = rhs._hitpoints;
	this->_energyPoints = rhs._energyPoints;
	this->_attackDamage = rhs._attackDamage;
	return (*this);
}

ScavTrap::~ScavTrap()
{
    std::cout << "Destructor ScavTrap Called" << std::endl;
}

void    ScavTrap::guardGate( void )
{
    std::cout << "ScavTrap have enterred in Gate keeper mode" << std::endl;
}

void	ScavTrap::attack(std::string const & target)
{
	std::cout << "ScavTrap <" << this->_Name << "> attacks <" << target << ">, causing <" << this->_attackDamage << "> points of damage!" << std::endl;
}

