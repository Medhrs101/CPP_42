/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moharras <moharras@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/22 15:38:57 by moharras          #+#    #+#             */
/*   Updated: 2021/06/23 09:58:42 by moharras         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Weapon.hpp"

Weapon::Weapon(std::string type)
{
	_weaponType = type;
}

Weapon::~Weapon(void)
{
	return ;
}

const std::string& Weapon::getType()
{
	return (_weaponType);
}

void    Weapon::setType(std::string type)
{
	_weaponType = type;
	return ;
}
