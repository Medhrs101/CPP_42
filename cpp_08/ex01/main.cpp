/**
 * @Author: Your name
 * @Date:   2021-09-25 12:06:14
 * @Last Modified by:   Your name
 * @Last Modified time: 2021-09-25 13:43:26
 */
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: medhrs101 <medhrs101@student.42lyon.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/23 15:58:31 by moharras          #+#    #+#             */
/*   Updated: 2021/09/25 13:18:20 by medhrs101        ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "./span.hpp"

int main()
{
	try
	{
		span A(1006);
		A.addNumber(-1);
		A.addNumber(2);
		A.addNumber(100);
		A.addNumber(98);
		A.addNumber(5);
		// A.addNumber(9);
		// A.addNumber(99);
		std::list<int> lst(1000, 6);
		lst.push_back(20);
		lst.push_back(30);
		// lst.push_back(30);
		A.addNumber(lst.begin(), lst.end());
		std::cout << A.longestSpan() << std::endl;
		std::cout << A.shortestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cout << "here" << std::endl;
		std::cerr << e.what() << '\n';
	}
	return (0);
}