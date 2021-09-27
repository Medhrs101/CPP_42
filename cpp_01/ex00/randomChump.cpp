/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   randomChump.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moharras <moharras@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/24 10:53:54 by moharras          #+#    #+#             */
/*   Updated: 2021/06/30 14:43:28 by moharras         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Zombie.hpp"

void randomChump(std::string name)
{
	Zombie	Zomb(name);
	Zomb.setName(name);
	Zomb.announce();
}
