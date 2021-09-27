/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moharras <moharras@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/22 16:42:15 by moharras          #+#    #+#             */
/*   Updated: 2021/09/26 11:34:26 by moharras         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./easyfind.hpp"
#include <iostream>
#include <vector>
#include <list>

const char* ExistException::what() const throw()
{
    return ("Element Exist");
}

const char* NotExistException::what() const throw()
{
    return ("Element Not Exist");
}

template <typename T>
void    easyfind(T &container, int n)
{
    (std::find(container.begin(), container.end(), n) != container.end()) ? throw ExistException() : throw NotExistException();
}

void showlist(std::list <int> g)
{
    std::list <int> :: iterator it;
    for(it = g.begin(); it != g.end(); ++it)
        std::cout << '\t' << *it;
    std::cout << std::endl;
}

int main()
{
    std::cout << "**************************Testing with vector************************" << std::endl;
    try
    {
        std::vector<int> vec;
        vec.push_back(10);
        vec.push_back(20);
        vec.push_back(30);
        easyfind(vec, 20);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    std::cout << "**************************Testing  with  list************************" << std::endl;
    try
    {
        std::list<int> lst;
        lst.push_back(1);
        lst.push_back(2);
        lst.push_back(3);
        lst.push_back(4);
        easyfind(lst, 5);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    
    return (0);
}