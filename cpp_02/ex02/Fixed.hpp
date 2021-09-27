/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moharras <moharras@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/02 11:27:13 by moharras          #+#    #+#             */
/*   Updated: 2021/07/15 15:01:40 by moharras         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP
#include <iostream>
#define EPSILON 1.0e-7
class Fixed
{
private:
	int _fixedPointedValue;
	static const int _nbFractionalbits = 8;
public:
	Fixed();
	~Fixed();
    Fixed(int const	intValue);
    Fixed(float const floatValue);
	Fixed(Fixed const& rhs);
	Fixed&	operator= (Fixed const & rhs);
	int		getRawBits(void) const;
	void	setRawBits(int const raw);
	float	toFloat(void) const;
	int		toInt( void ) const;
	bool	operator<(const Fixed &val);
	bool	operator<=(const Fixed &val);
	bool	operator>(const Fixed &val);
	bool	operator>=(const Fixed &val);
	bool	operator==(const Fixed &val);
	bool	operator!=(const Fixed &val);
	Fixed	operator+(const Fixed &val);
	Fixed	operator-(const Fixed &val);
	Fixed	operator*(const Fixed &val);
	Fixed	operator/(const Fixed &val);
	Fixed&	operator++();
	Fixed	operator++(int);
	Fixed&	operator--();
	Fixed	operator--(int);
	static Fixed&	min(Fixed&, Fixed&);
	static const Fixed&	min(const Fixed&, const Fixed&);
	static Fixed&	max(Fixed&, Fixed&);
	static const Fixed&	max(const Fixed&, const Fixed&);
};
std::ostream&	operator<<(std::ostream &ostr, const Fixed &val);
#endif