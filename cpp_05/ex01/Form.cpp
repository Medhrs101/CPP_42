/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moharras <moharras@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/04 12:21:46 by moharras          #+#    #+#             */
/*   Updated: 2021/09/07 16:07:45 by moharras         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Form.hpp"

Form::Form():
_name(""),
_sign(false),
_signGrade(150),
_executeGrade(150)
{
    std::cout << "Default Constructor called from Form" << std::endl;
}

Form::Form(std::string const name, int const signGrade, int const executeGrade):
_name(name),
_sign(false),
_signGrade(signGrade),
_executeGrade(executeGrade)
{
    std::cout << "Parametrized Constructor called from Form" << std::endl;
    if (executeGrade < 1 || signGrade < 1)
        throw Form::GradeTooHighException();
    else if (executeGrade > 150 || executeGrade > 150)
        throw Form::GradeTooLowException();
}

const char* Form::GradeTooHighException::what() const throw()
{
    return ("Grade Too High");
}

const char* Form::GradeTooLowException::what() const throw()
{
    return ("Grade Too Low");
}

const char* Form::UnsignedFormException::what() const throw()
{
    return ("Unsigned Form");
}

const char* Form::FormisAlreadySigned::what() const throw()
{
    return ("Form is already signed");
}

Form::~Form()
{
    std::cout << "Destructor called from Form" << std::endl;
}

Form::Form(Form const& rhs):
_name(""),
_signGrade(150),
_executeGrade(150)
{
    std::cout << "Copy Constructor called from Form" << std::endl;
    *this = rhs;
}

Form&   Form::operator=(Form const& rhs)
{
    this->_sign = rhs._sign;
    return (*this);
}

void    Form::beSigned(Bureaucrat& rhs)
{

    if (this->_sign)
        throw Form::FormisAlreadySigned();
    if (rhs.getGrade() > this->_signGrade)
        throw Bureaucrat::GradeTooLowException();
    this->_sign = true;
}

std::string const&  Form::getName() const
{
    return (this->_name);
}

int const&  Form::getSignGrade() const
{
    return (this->_signGrade);
}

int const&  Form::getExecuteGrade() const
{
    return (this->_executeGrade);
}

bool    Form::getSign() const
{
    return (this->_sign);
}

std::ostream&	operator<<(std::ostream& os, Form const& rhs)
{
	os << rhs.getName() << " sign grade: " << rhs.getSignGrade() << " execute grade: " << rhs.getExecuteGrade() << " sign: "<< rhs.getSign() <<std::endl;
	return (os);
}
