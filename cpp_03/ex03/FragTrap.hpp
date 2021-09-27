/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moharras <moharras@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/14 15:41:15 by moharras          #+#    #+#             */
/*   Updated: 2021/07/18 17:56:29 by moharras         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "./ClapTrap.hpp"

class FragTrap : virtual public ClapTrap
{
private:
    /* data */
public:
    FragTrap();
    FragTrap(std::string);
    FragTrap(FragTrap const & rhs);
	FragTrap&	operator=(FragTrap const & rhs);
    ~FragTrap();
    void    attack(std::string const & target);
    void    highFivesGuys( void );
};


#endif