/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moharras <moharras@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/02 11:33:09 by moharras          #+#    #+#             */
/*   Updated: 2021/07/15 16:11:56 by moharras         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Fixed.hpp"
#include <cmath>

#include "./Fixed.hpp"

Fixed::Fixed(): _fixedPointedValue(0)
{
}

Fixed::Fixed(Fixed const& rhs)
{
	*this = rhs;
}

Fixed::~Fixed()
{
	return ;
}
Fixed::Fixed(int const intValue)
{
	this->_fixedPointedValue = intValue << _nbFractionalbits;
}

Fixed::Fixed(const float floatValue)
{
	this->_fixedPointedValue = roundf((floatValue * (1 << _nbFractionalbits)));
}

float Fixed::toFloat(void) const
{
	return (float)_fixedPointedValue / (1 << _nbFractionalbits);
	
}

int Fixed::toInt( void ) const
{
	// std::cout << "fxdp: " << _fixedPointedValue << std::endl;
	return (_fixedPointedValue >> _nbFractionalbits);
}

Fixed&	Fixed::operator= (Fixed const & rhs)
{
	// std::cout << "Assignation operator called" << std::endl;
	setRawBits(rhs._fixedPointedValue);
	return (*this);
}

std::ostream&	operator<<(std::ostream &ostr, const Fixed &val)
{
	// std::cout << "Operator << called" << std::endl;
	ostr << val.toFloat();
	return (ostr);
}

bool	Fixed::operator<(const Fixed &val)
{
	return (_fixedPointedValue < val._fixedPointedValue);
}

bool	Fixed::operator<=(const Fixed &val)
{
	return (_fixedPointedValue <= val._fixedPointedValue);
}

bool	Fixed::operator>(const Fixed &val)
{
	return (_fixedPointedValue > val._fixedPointedValue);
}

bool	Fixed::operator>=(const Fixed &val)
{
	return (_fixedPointedValue >= val._fixedPointedValue);
}

bool	Fixed::operator==(const Fixed &val)
{
	return (_fixedPointedValue == val._fixedPointedValue);
}

bool	Fixed::operator!=(const Fixed &val)
{
	return (_fixedPointedValue != val._fixedPointedValue);
}

Fixed	Fixed::operator+(const Fixed &b)
{
	Fixed	tmp;

	tmp._fixedPointedValue = this->_fixedPointedValue + b._fixedPointedValue;
	return (tmp);
}

Fixed	Fixed::operator-(const Fixed &b)
{
	Fixed	tmp;

	tmp._fixedPointedValue = this->_fixedPointedValue - b._fixedPointedValue;
	return (tmp);
}

Fixed	Fixed::operator*(const Fixed &b)
{
	return (Fixed(this->toFloat() * b.toFloat()));
}

Fixed	Fixed::operator/(const Fixed &b)
{
	return (Fixed(this->toFloat() / b.toFloat()));
}

// Overloading the prefix operator
Fixed&	Fixed::operator++()
{
	++_fixedPointedValue;
	return(*this);
}

Fixed	Fixed::operator++(int)
{
	Fixed tmp(*this);
	this->operator++();
	return(tmp);
}

Fixed&	Fixed::operator--()
{
	--_fixedPointedValue;	
	return(*this);
}

Fixed	Fixed::operator--(int)
{
	Fixed tmp(*this);
	this->operator--();
	return(tmp);
}

Fixed	&Fixed::min(Fixed &a, Fixed& b)
{
	if (a < b)
		return (a);
	return (b);
}

const Fixed& Fixed::min(const Fixed &a, const Fixed &b)
{
	if ((Fixed)a < b)
		return(a);
	return (b);
}

Fixed	&Fixed::max(Fixed &a, Fixed& b)
{
	if (a > b)
		return (a);
	return (b);
}

const Fixed& Fixed::max(const Fixed &a, const Fixed &b)
{
	if ((Fixed)a > b)
		return(a);
	return (b);
}

int Fixed::getRawBits(void) const
{
	return (_fixedPointedValue);
}

void	Fixed::setRawBits(int const raw)
{
	_fixedPointedValue = raw;
}
