/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moharras <moharras@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/02 11:33:09 by moharras          #+#    #+#             */
/*   Updated: 2021/07/15 14:53:58 by moharras         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Fixed.hpp"
#include <cmath>

Fixed::Fixed(): _fixedPointedValue(0)
{
	std::cout << "Default constructor called" << std::endl;
}


Fixed::Fixed(Fixed const& rhs)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = rhs;
}

Fixed&	Fixed::operator= (Fixed const & rhs)
{
	std::cout << "Assignation operator called" << std::endl;
	setRawBits(rhs._fixedPointedValue);
	return (*this);
}

int Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (_fixedPointedValue);
}

void	Fixed::setRawBits(int const raw)
{
	_fixedPointedValue = raw;
}

Fixed::~Fixed()
{
	std::cout << "Destrutor called" << std::endl;
	return ;
}

Fixed::Fixed(int const intValue)
{
	std::cout << "Int constructor called" << std::endl;
	this->_fixedPointedValue = intValue << _nbFractionalbits;
}

Fixed::Fixed(const float floatValue)
{
	std::cout << "Float constructor called" << std::endl;
	this->_fixedPointedValue = roundf((floatValue * (1 << _nbFractionalbits)));
}

float Fixed::toFloat(void) const
{
	return (float)_fixedPointedValue / (1 << _nbFractionalbits);
	
}

int Fixed::toInt( void ) const
{
	return (_fixedPointedValue >> _nbFractionalbits);
}

std::ostream&	operator<<(std::ostream &ostr, const Fixed &val)
{
	ostr << val.toFloat();
	return (ostr);
}
