/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moharras <moharras@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/28 14:24:22 by moharras          #+#    #+#             */
/*   Updated: 2021/09/01 12:20:44 by moharras         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Animal.hpp"

Animal::Animal(/* args */) : type("Animal")
{
    // type = "Animal";
    std::cout << "Default Constructor called from Animal" << std::endl;
}

Animal::Animal(std::string tpe) : type(tpe)
{
    std::cout << "Constructor Overloading from Animal" << std::endl;
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

Animal& Animal::operator=(Animal const& rhs)
{
    this->type = rhs.type;
    return (*this);
}

