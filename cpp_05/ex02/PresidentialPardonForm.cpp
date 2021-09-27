/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moharras <moharras@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/05 16:36:00 by moharras          #+#    #+#             */
/*   Updated: 2021/09/06 15:55:06 by moharras         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm()
{
    std::cout << "Default Constructor called from PresidentialPardonForm" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(std::string target):
Form("PresidentialPardonForm", 25, 5), _target(target)
{
    std::cout << "Parametrized Constructor called from PresidentialPardonForm" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const& rhs):
Form(rhs), _target(rhs._target)
{
    std::cout << "Copy Constructor called from PresidentialPardonForm" << std::endl;
}

PresidentialPardonForm&    PresidentialPardonForm::operator=(PresidentialPardonForm const& rhs)
{
    this->_target = rhs._target;
    Form::operator=(rhs);
    return (*this);
}

PresidentialPardonForm::~PresidentialPardonForm()
{
    std::cout << "Destructor called from PresidentialPardonForm" << std::endl;
}

void    PresidentialPardonForm::action() const
{
    std::cout << this->_target << " has pardoned by Zafod Beeblebrox" << std::endl;    
}
