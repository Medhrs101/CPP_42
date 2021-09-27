// /* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moharras <moharras@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/02 12:32:37 by moharras          #+#    #+#             */
/*   Updated: 2021/09/08 12:11:12 by moharras         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "./Intern.hpp"
#include <iostream>
#include <fstream>
int main()
{
	try
	{
		Intern someRandomIntern;
		Form* rrf;
		Bureaucrat bureaucrat2("Khalid", 5);
		// rrf = someRandomIntern.makeForm("PresidentialPardon", "Bender");
		// rrf = someRandomIntern.makeForm("RobotomyRequest", "Bender");
		rrf = someRandomIntern.makeForm("ShrubberyCreation ", "Bender");
		bureaucrat2.signForm(*rrf);
		bureaucrat2.executeForm(*rrf);
		delete rrf;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
	
	return (0);
}