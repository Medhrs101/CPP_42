/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moharras <moharras@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/24 14:47:35 by moharras          #+#    #+#             */
/*   Updated: 2021/06/27 14:47:21 by moharras         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef KAREN_HPP
#define KAREN_HPP

#include <iostream>

class Karen
{
private:
    void    debug(void);
    void    info(void);
    void    warning(void);
    void    error(void);
    void    problem(void);
public:
    Karen();
    ~Karen();
    void    complain(std::string level);
};

#endif