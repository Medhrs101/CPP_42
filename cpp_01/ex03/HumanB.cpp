/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moharras <moharras@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/23 07:15:23 by moharras          #+#    #+#             */
/*   Updated: 2021/06/30 15:05:39 by moharras         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./HumanB.hpp"

HumanB::HumanB(std::string name): _name(name) {}
HumanB::~HumanB() {}

void	HumanB::setWeapon(Weapon &club)
{
	_club = &club;
	return ;
}

void	HumanB::attack(void)
{
	std::cout << _name << " attacks with his " << _club->getType() << std::endl;;
	return ;
}
