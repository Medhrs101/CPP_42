/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moharras <moharras@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/28 18:12:25 by moharras          #+#    #+#             */
/*   Updated: 2021/09/01 12:00:37 by moharras         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP
#include "./Animal.hpp"
#include "./Brain.hpp"

class Cat : public Animal
{
private:
	Brain	*Br;
public:
	Cat();
	virtual ~Cat();
	Cat(Cat const& rhs);
	Cat&	operator=(Cat const& rhs);
	virtual void makeSound( void ) const;
};

#endif