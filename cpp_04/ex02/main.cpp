/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moharras <moharras@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/28 14:53:19 by moharras          #+#    #+#             */
/*   Updated: 2021/09/01 14:39:13 by moharras         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Animal.hpp"
#include "./Dog.hpp"
#include "./Cat.hpp"

int main()
{

    // Dog basic;
    // {
    //     Dog tmp = basic;
    // }
    const Animal    *p[10];
    int N = 4;
    for(int i = 0; i < N; i++)
    {
        if (i < N/2)
            p[i] = new Dog;
        else
            p[i] = new Cat;
    }
    for(int i = 0; i < N; i++)
    {
        delete p[i];
    }

    // std::cout << j->getType() << " " << std::endl;
    // std::cout << i->getType() << " " << std::endl;


    return (0);
}