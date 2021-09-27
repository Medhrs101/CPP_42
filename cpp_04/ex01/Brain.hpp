/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moharras <moharras@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/29 11:20:23 by moharras          #+#    #+#             */
/*   Updated: 2021/09/01 12:01:11 by moharras         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>

class Brain
{
private:
    std::string _BrainArray[100];
public:
    Brain();
    Brain(Brain const&  rhs);
    Brain&  operator=(Brain const& rhs);
    ~Brain();
};

#endif