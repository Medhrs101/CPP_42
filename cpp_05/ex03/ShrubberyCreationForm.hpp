/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moharras <moharras@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/05 15:43:24 by moharras          #+#    #+#             */
/*   Updated: 2021/09/06 11:29:41 by moharras         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP
#include <iostream>
#include "./Form.hpp"

class ShrubberyCreationForm : public Form
{
private:
    std::string _target;
public:
    ShrubberyCreationForm();
    ShrubberyCreationForm(std::string target);
    ShrubberyCreationForm(ShrubberyCreationForm const& rhs);
    ShrubberyCreationForm& operator=(ShrubberyCreationForm const& rhs);
    virtual ~ShrubberyCreationForm();
    virtual void    action() const;
};


#endif
