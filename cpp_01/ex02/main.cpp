/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moharras <moharras@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/24 10:14:16 by moharras          #+#    #+#             */
/*   Updated: 2021/06/24 11:55:40 by moharras         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main()
{
	std::string str = "HI THIS IS BRAIN";
	std::string *stringPTR = &str;
	std::string &stringREF = str;
	
	std::cout << "Adress memory of the string    : " << &str <<std::endl;
	std::cout << "Adress memory of the stringPTR : " << stringPTR <<std::endl;
	std::cout << "Adress memory of the stringREF : " << &stringREF <<std::endl;
	std::cout << "Pointer to str                 : " << *stringPTR <<  std::endl;
	std::cout << "Reference to str               : " << stringREF << std::endl;
	return (0);
}