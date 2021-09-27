/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moharras <moharras@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/30 16:23:52 by moharras          #+#    #+#             */
/*   Updated: 2021/09/01 16:37:44 by moharras         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Ice.hpp"

Ice::Ice(/* args */)
{
    _type = "ice";
    std::cout << "Default Constructor called from Ice" << std::endl;
}

Ice::~Ice()
{
    std::cout << "Destructor called from Ice" << std::endl;
}

Ice::Ice(Ice const& rhs)
{
	std::cout << "Copy Constructor called from Ice" << std::endl;
	*this = rhs;
}

Ice&   Ice::operator=(Ice const& rhs)
{
    _type = rhs._type;
    return (*this);
}

AMateria* Ice::clone() const
{
    AMateria    *materiaIce = new Ice();
    return (materiaIce);
};

void    Ice::use(ICharacter& target)
{
    std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}