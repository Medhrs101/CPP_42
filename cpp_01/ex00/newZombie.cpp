/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moharras <moharras@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/24 10:53:38 by moharras          #+#    #+#             */
/*   Updated: 2021/06/30 14:41:08 by moharras         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Zombie.hpp"

Zombie*	newZombie(std::string name)
{
	Zombie	*Zomb = new Zombie(name);
		Zomb->setName(name);
	Zomb->announce();
		return (Zomb);
}
