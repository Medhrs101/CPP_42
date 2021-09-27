/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mutantstack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moharras <moharras@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/25 13:46:09 by medhrs101         #+#    #+#             */
/*   Updated: 2021/09/26 11:20:18 by moharras         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP
#include <iostream>
#include <stack>

template <typename T, class Container = std::deque<T> >
class MutantStack : public std::stack<T, Container>
{
public:
    MutantStack() : std::stack<T, Container>() {}
    MutantStack(MutantStack const& other): std::stack<T, Container>(other) {}
    MutantStack& operator=(MutantStack const& other)
    {
        std::stack<T, Container>::operator=(other);
        return *this;
    };
    ~MutantStack() {}
    typedef typename std::stack<T, Container>::container_type::iterator iterator;
    typedef typename std::stack<T, Container>::container_type::const_iterator const_iterator;
    typedef typename std::stack<T, Container>::container_type::reverse_iterator reverse_iterator;
    typedef typename std::stack<T, Container>::container_type::const_reverse_iterator const_reverse_iterator;
    iterator begin() {return std::stack<T, Container>::c.begin();}
    iterator end() {return std::stack<T, Container>::c.end();}
    const_iterator cbegin() {return std::stack<T, Container>::c.cbegin();}
    const_iterator cend() {return std::stack<T, Container>::c.cend();}
    reverse_iterator rbegin() {return std::stack<T, Container>::c.rbegin();}
    reverse_iterator rend () {return std::stack<T, Container>::c.rend();}
    const_reverse_iterator crbegin() {return std::stack<T, Container>::c.crbegin();}
    const_reverse_iterator crend() {return std::stack<T, Container>::c.crend();}
};

#endif