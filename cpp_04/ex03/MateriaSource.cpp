/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moharras <moharras@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/31 15:45:14 by moharras          #+#    #+#             */
/*   Updated: 2021/09/01 16:43:10 by moharras         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./MateriaSource.hpp"

MateriaSource::MateriaSource(/* args */)
{
	this->_nbMateria = 0;
	std::cout << "Default constructor called from MateriaSource" << std::endl;
}

MateriaSource::~MateriaSource()
{
	std::cout <<  "Destructor called from MateriaSource" << std::endl;
}

void MateriaSource::learnMateria(AMateria *m)
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

MateriaSource&	MateriaSource::operator=(MateriaSource const&	rhs)
{
	this->_nbMateria = rhs._nbMateria;
	DeleteInventory();
	for (int i = 0; i < rhs._nbMateria; i++)
		inventory[i] = rhs.inventory[i]->clone();
	return (*this);
}

AMateria* MateriaSource::createMateria(std::string const & type)
{
	for (int i = 0; i < this->_nbMateria; i++)
		if (type == this->inventory[i]->getType())
			return (this->inventory[i]->clone());
	return (0);
}

void	MateriaSource::DeleteInventory()
{
	for (int i = 0; i < this->_nbMateria; i++)
	{
		delete this->inventory[i];
		this->inventory[i] = NULL;
	}
}
