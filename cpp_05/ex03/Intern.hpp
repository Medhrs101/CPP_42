/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moharras <moharras@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/06 16:48:44 by moharras          #+#    #+#             */
/*   Updated: 2021/09/08 11:56:50 by moharras         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef INTERN_HPP
#define INTERN_HPP
#include <iostream>
#include "./Form.hpp"
#include "./ShrubberyCreationForm.hpp"
#include "./PresidentialPardonForm.hpp"
#include "./RobotomyRequestForm.hpp"

class Intern
{
public:
    Intern();
    Intern(Intern const& rhs);
    Intern& operator=(Intern const& rhs);
    Form* makeForm(std::string, std::string);
    ~Intern();
    class ErrorException : public std::exception
	{
		virtual const char* what() const throw();
	};
};

#endif
