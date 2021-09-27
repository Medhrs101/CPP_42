/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moharras <moharras@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/30 16:19:31 by moharras          #+#    #+#             */
/*   Updated: 2021/09/01 16:39:17 by moharras         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Cure.hpp"

Cure::Cure()
{
    _type = "cure";
    std::cout << "Default Constructor called from Cure" << std::endl;
}

Cure::~Cure()
{
    std::cout << "Destructor called from Cure" << std::endl;
}

Cure::Cure(Cure const& rhs)
{
	std::cout << "Copy Constructor called from Cure" << std::endl;
	*this = rhs;
}

Cure&   Cure::operator=(Cure const& rhs)
{
    _type = rhs._type;
    return (*this);
}

AMateria* Cure::clone() const
{
    AMateria  *mat = new Cure();
    return (mat);
}

void    Cure::use(ICharacter& target)
{
    std::cout << "* heals " << target.getName() << "’s wounds *" << std::endl;
}

