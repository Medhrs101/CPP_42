/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moharras <moharras@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/28 14:23:05 by moharras          #+#    #+#             */
/*   Updated: 2021/09/01 12:19:06 by moharras         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP
#include <iostream>

class Animal
{
protected:
	std::string type;
public:
	Animal();
	Animal (std::string);
	Animal(Animal const& rhs);
	Animal& operator=(Animal const& rhs);
	virtual void	makeSound( void ) const = 0;
	virtual ~Animal();
};

#endif