/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moharras <moharras@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/16 19:45:20 by moharras          #+#    #+#             */
/*   Updated: 2021/06/24 11:33:22 by moharras         ###   ########.fr       */
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
Zombie* newZombie(std::string name);
void randomChump(std::string name);
#endif