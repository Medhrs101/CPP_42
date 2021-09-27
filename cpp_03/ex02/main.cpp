/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moharras <moharras@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/13 09:55:58 by moharras          #+#    #+#             */
/*   Updated: 2021/07/18 14:47:47 by moharras         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./FragTrap.hpp"

int main()
{
    FragTrap fg("constructer Frag name");
    std::string test = "target test";
    fg.attack(test);
    fg.takeDamage(25);
    fg.beRepaired(75);
    return (0);
}