/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moharras <moharras@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/13 09:55:58 by moharras          #+#    #+#             */
/*   Updated: 2021/08/31 16:34:07 by moharras         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main()
{
    ClapTrap claptrap("test");
    std::string test = "test000";
    claptrap.attack(test);
    claptrap.takeDamage(25);
    claptrap.beRepaired(75);
    return (0);
}