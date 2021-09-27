/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moharras <moharras@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/30 16:18:50 by moharras          #+#    #+#             */
/*   Updated: 2021/09/01 15:43:08 by moharras         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
#define CURE_HPP
#include "AMateria.hpp"

class Cure : public AMateria
{
public:
	Cure();
	virtual	~Cure();
	Cure(Cure const& rhs);
	Cure&	operator=(Cure const&);
	virtual AMateria* clone() const;
	virtual void use(ICharacter& target);
};

#endif