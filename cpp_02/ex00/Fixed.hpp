/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moharras <moharras@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/28 14:18:20 by moharras          #+#    #+#             */
/*   Updated: 2021/07/07 14:11:41 by moharras         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed
{
private:
	int _fixedPointedValue;
	static const int _nbFractionalbits = 8;
public:
	Fixed();
	Fixed(Fixed const& rhs);
	~Fixed();
	Fixed&	operator= (Fixed const & rhs);
	int		getRawBits(void) const;
	void	setRawBits(int const raw);
};

#endif
