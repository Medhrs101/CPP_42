/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moharras <moharras@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/28 14:23:05 by moharras          #+#    #+#             */
/*   Updated: 2021/09/01 11:49:35 by moharras         ###   ########.fr       */
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
	Animal(Animal const& rhs);
	Animal& operator=(Animal const& rhs);
	std::string const&	getType() const;
	virtual void	makeSound( void ) const;
	virtual ~Animal();
};

#endif