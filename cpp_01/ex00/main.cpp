/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moharras <moharras@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/16 19:44:57 by moharras          #+#    #+#             */
/*   Updated: 2021/06/26 18:32:13 by moharras         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Zombie.hpp"

int main()
{
	Zombie *Zomb = newZombie("newZombie");  
	randomChump("randomZombie");
	delete Zomb;
	return (0);
}