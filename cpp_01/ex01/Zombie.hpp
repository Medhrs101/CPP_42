/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moharras <moharras@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/16 19:45:20 by moharras          #+#    #+#             */
/*   Updated: 2021/06/24 11:34:18 by moharras         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef  ZOMBIE_H
# define ZOMBIE_H
#include <iostream>

class Zombie {
private:
    std::string _name;
public:
    Zombie();
    Zombie(std::string);
    ~Zombie();
    void    setName(std::string name);
    void    announce(void) const;
};
Zombie*	zombieHorde(int N, std::string name);

#endif