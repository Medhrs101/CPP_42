/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moharras <moharras@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/28 14:41:38 by moharras          #+#    #+#             */
/*   Updated: 2021/09/01 12:00:49 by moharras         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include "./Animal.hpp"
#include "./Brain.hpp"

class Dog : public Animal
{
private:
	Brain	*Br;
public:
	Dog();
	virtual	~Dog();
	Dog(Dog const& rhs);
	Dog&	operator=(Dog const& rhs);
	virtual void makeSound( void ) const;
};

#endif