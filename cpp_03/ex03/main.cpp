/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moharras <moharras@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/13 09:55:58 by moharras          #+#    #+#             */
/*   Updated: 2021/08/31 16:48:52 by moharras         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./DiamondTrap.hpp"

int main()
{
    DiamondTrap dt("Diamond");
    std::string test = "RandomName";
    dt.takeDamage(25);
    dt.beRepaired(75);
    dt.whoAmI();
    return (0);
}