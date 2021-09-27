/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moharras <moharras@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/14 15:42:58 by moharras          #+#    #+#             */
/*   Updated: 2021/07/18 17:57:25 by moharras         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./FragTrap.hpp"

FragTrap::FragTrap()
{
	std::cout << "Default Constructer Called from FragTrap" << std::endl;
}

FragTrap::FragTrap(std::string Name)
{
	std::cout << "Parametrize Constructer Called from FragTrap" << std::endl;
	this->_Name = Name;
	this->_hitpoints = 100;
	this->_energyPoints = 100;
	this->_attackDamage = 30;
}

FragTrap::FragTrap(FragTrap const & rhs)
{
	std::cout << "Copy constructor FragTrap Called" << std::endl;
	*this = rhs;
}

FragTrap&	FragTrap::operator=(FragTrap const & rhs)
{
	std::cout << "Assignation operator called" << std::endl;
	this->_Name = rhs._Name;
	this->_hitpoints = rhs._hitpoints;
	this->_energyPoints = rhs._energyPoints;
	this->_attackDamage = rhs._attackDamage;
	return (*this);
}

void	FragTrap::highFivesGuys( void )
{
	std::cout << " positive high fives request" << std::endl;
}

FragTrap::~FragTrap()
{
	std::cout << "Destructer Called from FragTrap" << std::endl;
}

void	FragTrap::attack(std::string const & target)
{
	std::cout << "FragTrap <" << this->_Name << "> attacks <" << target << ">, causing <" << this->_attackDamage << "> points of damage!" << std::endl;
}
