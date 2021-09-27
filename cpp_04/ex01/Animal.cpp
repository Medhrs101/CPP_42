/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moharras <moharras@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/28 14:24:22 by moharras          #+#    #+#             */
/*   Updated: 2021/09/01 11:55:08 by moharras         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Animal.hpp"

Animal::Animal(/* args */) : type("Animal")
{
    // type = "Animal";
    std::cout << "Default Constructor called from Animal" << std::endl;
}

Animal::~Animal()
{
    std::cout << "Destructor called from Animal" << std::endl;
}

Animal::Animal(const Animal& rhs)
{
    std::cout << "Copy Constructor called from Animal" << std::endl;
    *this = rhs;
}

std::string const&  Animal::getType() const
{
    return (this->type);
}

Animal& Animal::operator=(Animal const& rhs)
{
    this->type = rhs.type;
    return (*this);
}

void    Animal::makeSound( void ) const
{
    std::cout << "The " << type << " sound" << std::endl;
}

