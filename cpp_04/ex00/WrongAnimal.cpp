/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongWrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moharras <moharras@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/28 18:46:33 by moharras          #+#    #+#             */
/*   Updated: 2021/08/28 18:47:15 by moharras         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./WrongAnimal.hpp"

WrongAnimal::WrongAnimal(/* args */) : type("WrongAnimal")
{
    // type = "WrongAnimal";
    std::cout << "Default Constructor called from WrongAnimal" << std::endl;
}

WrongAnimal::~WrongAnimal()
{
    std::cout << "Destructor called from WrongAnimal" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal& rhs)
{
    std::cout << "Copy Constructor called from WrongAnimal" << std::endl;
    *this = rhs;
}

WrongAnimal& WrongAnimal::operator=(WrongAnimal const& rhs)
{
    this->type = rhs.type;
    return (*this);
}

void    WrongAnimal::makeSound( void ) const
{
    std::cout << "The WrongAnimal sound" << std::endl;
}