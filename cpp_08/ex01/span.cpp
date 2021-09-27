/**
 * @Author: Your name
 * @Date:   2021-09-25 12:06:14
 * @Last Modified by:   Your name
 * @Last Modified time: 2021-09-25 13:40:12
 */
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: medhrs101 <medhrs101@student.42lyon.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/23 16:08:02 by moharras          #+#    #+#             */
/*   Updated: 2021/09/25 12:20:14 by medhrs101        ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "./span.hpp"

span::span()
{
	this->arr.reserve(0);
}

span::span(unsigned int N) : _N(N)
{
	this->arr.reserve(this->_N);
}

span::span(span const & other)
{
	*this = other;
}

span&   span::operator=(span const & other)
{
	this->_N = other._N;
	this->arr = other.arr;
    return (*this);
}

int span::longestSpan()
{
	if (arr.size() <= 1)
		throw NoSpanException();
	return (*std::max_element(arr.begin(), arr.end()) - *std::min_element(arr.begin(), arr.end()));
}

int span::shortestSpan()
{
	if (arr.size() <= 1)
		throw NoSpanException();
	std::vector<int> arr1 = arr;
	std::sort(arr1.begin(), arr1.end());
	long int diff = arr1.at(1) - arr1.at(0);
	for (unsigned int i = 1; i < arr1.size() - 1; i++)
		if((arr1.at(i + 1) - arr1.at(i)) < diff)
			diff = arr1.at(i + 1) - arr1.at(i);
	return(diff);
}

const   char*   span::NoSpaceException::what() const throw()
{
	return ("No Space Left");
}

const   char*   span::NoSpanException::what() const throw()
{
	return ("There is no span");
}

void    span::addNumber(int n)
{
	if (this->_N <= this->arr.size())
		throw NoSpaceException();
	this->arr.push_back(n);
}

span::~span()
{
	this->arr.clear();
}
