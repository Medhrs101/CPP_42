/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moharras <moharras@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/22 15:47:14 by moharras          #+#    #+#             */
/*   Updated: 2021/06/25 12:02:33 by moharras         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./HumanA.hpp"
#include "./Weapon.hpp"

HumanA::HumanA(std::string name, Weapon &club): _name(name), _club(club)
{
	return ;
}

HumanA::~HumanA()
{
	return ;
}

void HumanA::attack()
{
	std::cout << _name << " attacks with " << _club.getType() << std::endl;
	return ;
}
