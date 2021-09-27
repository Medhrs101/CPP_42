/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moharras <moharras@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/25 11:34:34 by moharras          #+#    #+#             */
/*   Updated: 2021/06/30 15:00:39 by moharras         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
#define HUMANB_HPP
#include <iostream>
#include "./Weapon.hpp"

class HumanB
{
private:
    std::string _name;
    Weapon* _club;
public:
    HumanB(std::string name);
    ~HumanB();
    void    setWeapon(Weapon& club);
    void    attack(void);
};

#endif