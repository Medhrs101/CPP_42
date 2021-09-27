/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moharras <moharras@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/28 18:13:02 by moharras          #+#    #+#             */
/*   Updated: 2021/08/29 16:06:11 by moharras         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Cat.hpp"

Cat::Cat()
{
	type = "Cat";
    
    this->Br = new Brain();
    std::cout << "Default Constructor called from Cat" << std::endl;
}

Cat::~Cat()
{
    delete this->Br;
    std::cout << "Destructor called from Cat" << std::endl;
}

Cat::Cat(const Cat& rhs)
{
    std::cout << "Copy Constructor called from Cat" << std::endl;
    *this = rhs;
}

Cat&	Cat::operator=(Cat const& rhs)
{
    this->type = rhs.type;
    this->Br = new Brain();
    *(this->Br) = *(rhs.Br);
	return (*this);
}

void    Cat::makeSound( void ) const
{
    std::cout << "Miaw Miaw " << std::endl;
}