/**
 * @Author: Your name
 * @Date:   2021-09-25 13:44:11
 * @Last Modified by:   Your name
 * @Last Modified time: 2021-09-25 19:13:50
 */
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: medhrs101 <medhrs101@student.42lyon.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/25 19:13:23 by medhrs101         #+#    #+#             */
/*   Updated: 2021/09/25 19:13:24 by medhrs101        ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "./mutantstack.hpp"
int main()
{
    MutantStack<int> mstack;
    mstack.push(5);
    mstack.push(17);
    std::cout << mstack.top() << std::endl;
    mstack.pop();
    std::cout << mstack.size() << std::endl;
    mstack.push(3);
    mstack.push(5);
    mstack.push(737);
    //[...]
    mstack.push(0);
    MutantStack<int>::iterator it = mstack.begin();
    MutantStack<int>::iterator ite = mstack.end();
    ++it;
    --it;
    while (it != ite)
    {
    std::cout << *it << std::endl;
    ++it;
    }
    // std::stack<int> s;
    // s = mstack;
    // for (size_t i = 0; i < 4; i++)
    // {
    //     std::cout <<"res "<< s.top() << std::endl;
    //     s.pop();
    // }
    
    // MutantStack<int> mstack2;
    // mstack2 = mstack;
    // it = mstack2.begin();
    // ite = mstack2.end();
    //    while (it != ite)
    // {
    // std::cout << *it << std::endl;
    // ++it;
    // }
    return 0;
}