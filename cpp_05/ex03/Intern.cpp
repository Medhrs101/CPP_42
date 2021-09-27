/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moharras <moharras@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/06 16:50:58 by moharras          #+#    #+#             */
/*   Updated: 2021/09/08 12:28:08 by moharras         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Intern.hpp"
Intern::Intern()
{
	std::cout << "Default Constructor called from Intern" << std::endl;
}

Intern::Intern(Intern const& rhs)
{
	*this = rhs;
}

Intern& Intern::operator=(Intern const& rhs)
{
	(void)rhs;
	return (*this);
}

Intern::~Intern()
{
	std::cout << "Destructor called from Intern" << std::endl;
}

Form    *getShrubbery(std::string target)
{
	return (new ShrubberyCreationForm(target));
}

Form    *getRoboto(std::string target)
{
	return (new RobotomyRequestForm(target));
}

Form    *getPresident(std::string target)
{
	return (new PresidentialPardonForm(target));
}

Form*   Intern::makeForm(std::string name, std::string target)
{
	Form*	frm;
	std::string arr[3] = {"ShrubberyCreation", "RobotomyRequest", "PresidentialPardon"};
	Form* (*pmf[])(std::string) = {getShrubbery, getRoboto, getPresident};
	for (int i = 0; i < 3; i++)
		if (name == arr[i])
		{
			frm = pmf[i](target);
			std::cout << "Intern creates " << name << std::endl;
			return (frm);
		}
	throw Intern::ErrorException();
}

const char* Intern::ErrorException::what() const throw()
{
	return ("Error");
}