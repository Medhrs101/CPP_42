/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moharras <moharras@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/30 16:24:14 by moharras          #+#    #+#             */
/*   Updated: 2021/09/01 15:43:52 by moharras         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
#define ICE_HPP

#include "./AMateria.hpp"

class Ice : public AMateria
{
public
:
	Ice(/* args */);
	virtual ~Ice();
	Ice(Ice const& rhs);
	Ice&	operator=(Ice const&);
	virtual AMateria* clone() const;
	virtual void use(ICharacter& target);
};

#endif