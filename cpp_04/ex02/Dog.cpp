/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moharras <moharras@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/28 14:42:24 by moharras          #+#    #+#             */
/*   Updated: 2021/09/01 14:38:55 by moharras         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Dog.hpp"

Dog::Dog()
{
	type = "Dog";
    this->Br = new Brain();
    std::cout << "Default Constructor called from Dog" << std::endl;
    return ;
}

Dog::~Dog()
{
    delete this->Br;
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
    this->Br = new Brain();
    *(this->Br) = *(rhs.Br);
	return (*this);
}

void    Dog::makeSound( void ) const
{
    std::cout << "Haw Haw " << std::endl;
}
