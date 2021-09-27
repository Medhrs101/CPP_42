/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moharras <moharras@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/16 12:51:05 by moharras          #+#    #+#             */
/*   Updated: 2021/09/16 14:38:11 by moharras         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdint.h>
#include <iostream>

struct Data
{
	int x;
	int y;
	char c;
	bool b;     
};

uintptr_t serialize(Data* ptr)
{
	return (reinterpret_cast<uintptr_t>(ptr));
}

Data* deserialize(uintptr_t raw)
{
	return (reinterpret_cast<Data *>(raw));    
}

int main()
{
	Data d;
	d.x = 5;
	d.y= 3;
	d.c = 'a';
	d.b = true;
	uintptr_t raw = serialize(&d);
	std::cout << "**********************Serialize*****************" << std::endl;
	int *pt = reinterpret_cast<int*>(&d);
	std::cout << *pt << std::endl;
	pt++;
	std::cout << *pt << std::endl;
	pt++;
	char *ch = reinterpret_cast<char *>(pt);
	std::cout << *ch << std::endl;
	ch++;
	bool *n = reinterpret_cast<bool*>(ch);
	std::cout << *n << std::endl;
	std::cout << "**********************Deserialize***************" << std::endl;
	Data *p;
	p = deserialize(raw);
	std::cout << p->x << std::endl;
	std::cout << p->y << std::endl;
	std::cout << p->c << std::endl;
	std::cout << p->b << std::endl;
	return (0);
}