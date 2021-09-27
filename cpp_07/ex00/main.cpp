/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moharras <moharras@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/20 10:09:57 by moharras          #+#    #+#             */
/*   Updated: 2021/09/21 11:00:01 by moharras         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./whatever.hpp"

int main()
{
	int a = -1;
	int b = 8;
	int *a1 = &a;
	int *b1 = &b;
	std::string str1 = "string1";
	std::string str2 = "string2";
	
	std::cout << "a: " << *a1 << "      b: " << *b1 << std::endl;
	swap(a1, b1);
	std::cout << "a: " << *a1 << "      b: " << *b1 << std::endl;
	
	std::cout << "str1 " << str1 << "      str2: " << str2 << std::endl;
	swap(str1, str2);
	std::cout << "str1 " << str1 << "      str2: " << str2 << std::endl;
	
	char	x = 'a';
	char	y = 'b';
	std::cout << "x: " << x << "      y: " << y << std::endl;
	swap(x, y);
	std::cout << "x: " << x << "      y: " << y << std::endl;
	
	std::cout << "min: " << min(x, y) << std::endl;
	std::cout << "max: " << max(a, b) << std::endl;
	
	return (0);
}