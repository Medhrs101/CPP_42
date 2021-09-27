/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moharras <moharras@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/05 16:24:50 by moharras          #+#    #+#             */
/*   Updated: 2021/09/06 15:51:26 by moharras         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(/* args */)
{
    std::cout << "Default Constructor called from RobotomyRequestForm" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm (std::string target):
Form("RobotomyRequestForm", 72, 45), _target(target)
{
    std::cout << "Parametrized Constructor called from RobotomyRequestform" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const& rhs):
Form(rhs), _target(rhs._target)
{
    std::cout << "Copy Constructor called from RobotomyRequestForm" << std::endl;
}

RobotomyRequestForm&    RobotomyRequestForm::operator=(RobotomyRequestForm const& rhs)
{
    Form::operator=(rhs);
    this->_target = rhs._target;
    return (*this);
}

RobotomyRequestForm::~RobotomyRequestForm()
{
    std::cout << "Destructor called from RobotomyRequestForm" << std::endl;
}

void    RobotomyRequestForm::action() const
{
    srand(time(0));
    int x = rand();
    if (x % 2)
        std::cout << this->_target << " has been robotomized" << std::endl;
    else
        std::cout << this->_target << " failure to robotomized" << std::endl;
}
