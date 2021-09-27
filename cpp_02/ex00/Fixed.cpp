/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moharras <moharras@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/28 14:19:29 by moharras          #+#    #+#             */
/*   Updated: 2021/07/02 12:41:43 by moharras         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Fixed.hpp"

Fixed::Fixed()
{
	std::cout << "Default constructor called" << std::endl;
	_fixedPointedValue = 0;
}


Fixed::Fixed(Fixed const& rhs)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = rhs;
}

Fixed&	Fixed::operator= (Fixed const & rhs)
{
	std::cout << "Assignation operator called" << std::endl;
	setRawBits(rhs.getRawBits());
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
