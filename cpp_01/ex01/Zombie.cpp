/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moharras <moharras@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/16 19:55:34 by moharras          #+#    #+#             */
/*   Updated: 2021/06/30 14:46:23 by moharras         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Zombie.hpp"

void    Zombie::setName(std::string name)
{
    _name = name;
}

Zombie::Zombie()
{
    std::cout << "Constructer called" << std::endl;
}
Zombie::Zombie(std::string name)
{
    _name = name;
    std::cout << "Constructer of Zombie_name: " << _name << " called" << std::endl;
}

Zombie::~Zombie()
{
    std::cout << "Destructer of Zombie_name: " << this->_name << " called" << std::endl;
}
void    Zombie::announce(void) const
{
    std::cout << "<" << _name << "> BraiiiiiiinnnzzzZ..." << std::endl;;
}