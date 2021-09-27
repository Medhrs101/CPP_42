/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moharras <moharras@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/13 09:55:58 by moharras          #+#    #+#             */
/*   Updated: 2021/07/18 17:47:22 by moharras         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./ScavTrap.hpp"

int main()
{
    ScavTrap sv("scav_constructername");
    std::string test = "ref_to_target";
    sv.attack(test);
    sv.takeDamage(25);
    sv.beRepaired(75);
    sv.guardGate();
    return (0);
}