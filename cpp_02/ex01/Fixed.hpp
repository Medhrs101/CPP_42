/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moharras <moharras@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/02 11:27:13 by moharras          #+#    #+#             */
/*   Updated: 2021/07/15 14:54:46 by moharras         ###   ########.fr       */
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
    Fixed(int const	intValue);
    Fixed(float const floatValue);
	Fixed(Fixed const& rhs);
	Fixed&	operator= (Fixed const & rhs);
	~Fixed();
	int		getRawBits(void) const;
	void	setRawBits(int const raw);
	float	toFloat(void) const;
	int		toInt( void ) const;
};
std::ostream&	operator<<(std::ostream &ostr, const Fixed &val);
#endif
