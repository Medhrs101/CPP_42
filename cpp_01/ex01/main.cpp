/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moharras <moharras@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/24 10:59:50 by moharras          #+#    #+#             */
/*   Updated: 2021/07/06 15:21:05 by moharras         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Zombie.hpp"

int main()
{
	int N = 1;
	if (N <= 0)
	{
		std::cout << "Number of zombies not valid" << std::endl;
		return (0);
	}
	Zombie *Zomb = zombieHorde(N, "zombiehorde");
	for (int i = 0; i < N; i++)
		Zomb[i].announce();
	delete[] Zomb;
	return (0);
}