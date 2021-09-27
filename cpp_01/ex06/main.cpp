/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moharras <moharras@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/25 09:26:23 by moharras          #+#    #+#             */
/*   Updated: 2021/06/25 09:58:25 by moharras         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Karen.hpp"
#include <iostream>

int main(int ac, char **av)
{
    std::string level;
    Karen karen_sys;
    (void)av;
    if (ac != 2)
    {
        std::cout << "Error Arguments" << std::endl;
        return (0);
    }
    level = av[1];
    karen_sys.complain(level);
    return (0);
}