/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moharras <moharras@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/21 10:33:36 by moharras          #+#    #+#             */
/*   Updated: 2021/09/21 10:57:25 by moharras         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
#define ITER_HPP
#include <iostream>

template <typename T>
void    print(T const & t)
{
    std::cout << t << std::endl;
}

template <typename T>
void    iter(T *a, int size, void(*print)(T const &))
{
    for (int i = 0; i < size; i++)
    {
        (*print)(a[i]);
    }    
}

#endif /* ITER_HPP */
