/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moharras <moharras@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/24 11:28:57 by moharras          #+#    #+#             */
/*   Updated: 2021/06/24 11:29:02 by moharras         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Zombie.hpp"

Zombie*	zombieHorde(int N, std::string name)
{
	Zombie *Zomb = new Zombie[N];
	for (int i = 0; i < N; i++)
		Zomb[i].setName(name);
	return (Zomb);
}
