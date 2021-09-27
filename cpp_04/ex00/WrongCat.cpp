/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongWrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moharras <moharras@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/29 09:03:42 by moharras          #+#    #+#             */
/*   Updated: 2021/08/29 09:03:44 by moharras         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./WrongCat.hpp"

WrongCat::WrongCat()
{
	type = "WrongCat";
    std::cout << "Default Constructor called from WrongCat" << std::endl;
}

WrongCat::~WrongCat()
{
    std::cout << "Destructor called from WrongCat" << std::endl;
}

WrongCat::WrongCat(const WrongCat& rhs)
{
    std::cout << "Copy Constructor called from WrongCat" << std::endl;
    *this = rhs;
}

WrongCat&	WrongCat::operator=(WrongCat const& rhs)
{
    this->type = rhs.type;
	return (*this);
}

void    WrongCat::makeSound( void ) const
{
    std::cout << "Wrong Miaw Miaw " << std::endl;
}
