/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moharras <moharras@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/02 12:32:37 by moharras          #+#    #+#             */
/*   Updated: 2021/09/09 11:23:45 by moharras         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include <iostream>
#include <fstream>
int main(){
    try
    {
        /* code */
        Form *form = new ShrubberyCreationForm("home");
        Bureaucrat bureaucrat("Ahmed", 137);
        // form->beSigned(bureaucrat);
        bureaucrat.signForm(*form);
        bureaucrat.executeForm(*form);
        delete form;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    
    try
    {
        Form *form1 = new RobotomyRequestForm("RRobotomyrequest");
        Bureaucrat bureaucrat1("Ali", 45);
        // form1->beSigned(bureaucrat1);
        bureaucrat1.signForm(*form1);
        bureaucrat1.executeForm(*form1);
        delete form1;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    try
    {
        Form *form2 = new PresidentialPardonForm("PresidentialPardon");
        Bureaucrat bureaucrat2("Khalid", 5);
        // form2->beSigned(bureaucrat2);
        bureaucrat2.signForm(*form2);
        bureaucrat2.executeForm(*form2);
        delete form2;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    
    return (0);
}