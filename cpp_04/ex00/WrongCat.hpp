/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moharras <moharras@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/28 18:48:34 by moharras          #+#    #+#             */
/*   Updated: 2021/09/01 11:47:44 by moharras         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP
#include "./WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
public:
	WrongCat();
	virtual ~WrongCat();
	WrongCat(WrongCat const& rhs);
	WrongCat&	operator=(WrongCat const& rhs);
	void makeSound( void ) const;
};

#endif