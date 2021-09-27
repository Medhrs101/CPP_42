/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moharras <moharras@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/25 11:34:27 by moharras          #+#    #+#             */
/*   Updated: 2021/06/25 12:16:25 by moharras         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
#define HUMANA_HPP
#include "./Weapon.hpp"

class HumanA
{
private:
	std::string _name;
	Weapon&		_club;
public:
	HumanA(std::string, Weapon&);
	~HumanA();
	void	attack(void);
};

#endif