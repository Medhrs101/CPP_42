/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moharras <moharras@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/29 11:44:32 by moharras          #+#    #+#             */
/*   Updated: 2021/09/01 12:01:22 by moharras         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Brain.hpp"

Brain::Brain()
{
    std::cout << "Default Constructor called from Brain" << std::endl;
}

Brain::~Brain()
{
    std::cout << "Destructor called from Brain" << std::endl;
}

Brain::Brain(const Brain& rhs)
{
    std::cout << "Copy Constructor called from Brain" << std::endl;
    *this = rhs;
}

Brain& Brain::operator=(Brain const& rhs)
{
    for (int i = 0; i < 100; i++)
        this->_BrainArray[i] = rhs._BrainArray[i];
    return (*this);
}
