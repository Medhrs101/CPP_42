/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moharras <moharras@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/28 14:42:24 by moharras          #+#    #+#             */
/*   Updated: 2021/08/28 18:17:20 by moharras         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Dog.hpp"

Dog::Dog()
{
	type = "Dog";
    std::cout << "Default Constructor called from Dog" << std::endl;
}

Dog::~Dog()
{
    std::cout << "Destructor called from Dog" << std::endl;
}

Dog::Dog(const Dog& rhs)
{
    std::cout << "Copy Constructor called from Dog" << std::endl;
    *this = rhs;
}

Dog&	Dog::operator=(Dog const& rhs)
{
    this->type = rhs.type;
	return (*this);
}

void    Dog::makeSound( void ) const
{
    std::cout << "Haw Haw " << std::endl;
}
