/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moharras <moharras@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/28 18:13:02 by moharras          #+#    #+#             */
/*   Updated: 2021/08/28 18:32:55 by moharras         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Cat.hpp"

Cat::Cat()
{
	type = "Cat";
    std::cout << "Default Constructor called from Cat" << std::endl;
}

Cat::~Cat()
{
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
	return (*this);
}

void    Cat::makeSound( void ) const
{
    std::cout << "Miaw Miaw " << std::endl;
}