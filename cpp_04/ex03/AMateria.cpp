/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moharras <moharras@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/31 12:25:45 by moharras          #+#    #+#             */
/*   Updated: 2021/09/01 16:33:34 by moharras         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./AMateria.hpp"

AMateria::AMateria()
{
	std::cout << "Default Constructor called from AMateria" << std::endl;
}

AMateria::~AMateria()
{
	std::cout << "Destructor called from AMateria" << std::endl;
}

AMateria::AMateria(AMateria const& rhs)
{
	std::cout << "Copy Constructor called from AMateria" << std::endl;
	*this = rhs;
}

AMateria&   AMateria::operator=(AMateria const& rhs)
{
	this->_type = rhs._type;
	return (*this);
}

std::string const&  AMateria::getType() const
{
	return (this->_type);
}

void	AMateria::use(ICharacter& target)
{
	(void)target;
}