/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moharras <moharras@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/30 16:50:50 by moharras          #+#    #+#             */
/*   Updated: 2021/09/01 16:51:27 by moharras         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Character.hpp"

Character::Character(/* args */)
{
	this->_nbMateria = 0;
	std::cout << "Default Constructor called form Character" << std::endl;
}

Character::Character(std::string name): _Name(name), _nbMateria(0)
{
	std::cout << "Parametrized Constructor called form Character" << std::endl;
}

Character::Character(Character const& rhs)
{
	std::cout << "Copy Constructor called from Character" << std::endl;
	*this = rhs;
}

Character&	Character::operator=(Character const& rhs)
{
	this->_Name = rhs._Name;
	this->_nbMateria = rhs._nbMateria;
	DeleteInventory();
	for (int i = 0; i < rhs._nbMateria; i++)
		inventory[i] = rhs.inventory[i]->clone();
	return (*this);
}

Character::~Character()
{
	DeleteInventory();
	std::cout << "Destructor called from Character" << std::endl;
}

std::string const & Character::getName() const
{
	return (this->_Name);
}

void    Character::equip(AMateria* m)
{
	if (!m)
		return ;
	if (_nbMateria > 3)
	{
		std::cout << " Materia in a full inventory" << std::endl;
		return ;
	}
	this->inventory[_nbMateria] = m;
	_nbMateria++;
}

void    Character::unequip(int idx)
{
	if (idx < 0 || idx > 3 || idx > _nbMateria)
	{
		std::cout << "idx not found" << std::endl;
		return ;
	}
	std::cout << "unequip" << std::endl;
	this->inventory[idx] = NULL;
	for (int i = idx + 1; i < _nbMateria - 1; i++)
			this->inventory[i] = this->inventory[i + 1];
	this->_nbMateria--;
}

void	Character::use(int idx, ICharacter& target)
{
	this->inventory[idx]->use(target);
}

void	Character::DeleteInventory()
{
	for (int i = 0; i < this->_nbMateria; i++)
	{
		delete this->inventory[i];
		this->inventory[i] = NULL;
	}
}

