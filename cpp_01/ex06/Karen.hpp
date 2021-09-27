/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moharras <moharras@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/25 09:25:10 by moharras          #+#    #+#             */
/*   Updated: 2021/06/25 09:35:25 by moharras         ###   ########.fr       */
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
public:
    Karen(/* args */);
    ~Karen();
    void    problem(void);
    void    complain(std::string level);
};

#endif
