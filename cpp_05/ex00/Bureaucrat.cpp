/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moharras <moharras@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/02 12:33:20 by moharras          #+#    #+#             */
/*   Updated: 2021/09/08 17:04:14 by moharras         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Bureaucrat.hpp"

Bureaucrat::Bureaucrat(/* args */)
{
	std::cout << "Default Constructor called from Bureaucrat" << std::endl;
	this->_grade = 150;
}

Bureaucrat::Bureaucrat(std::string const name, int const grade) : _name(name), _grade(grade)
{
	if (this->_grade < 1)
		throw Bureaucrat::GradeTooHighException();
	else if (this->_grade > 150)
		throw Bureaucrat::GradeTooLowException();
	std::cout << "Parametrized Constructer" << std::endl;
}

Bureaucrat::Bureaucrat(Bureaucrat const &rhs)
{
	std::cout << "Copy Constructor called" << std::endl;
	*this = rhs;
}

Bureaucrat&	Bureaucrat::operator=(Bureaucrat const&	rhs)
{
	std::cout << "Assignament operator Constructer" << std::endl;
	this->_grade = rhs._grade;
	return (*this);
}

const char* Bureaucrat::GradeTooHighException::what() const throw()
{
	return ("Grade Too Hight");
}

const char* Bureaucrat::GradeTooLowException::what() const throw()
{
	return ("Grade Too Low");
}

Bureaucrat::~Bureaucrat()
{
	std::cout << "Destructer called from Bureaucrat" << std::endl;
}

std::string	Bureaucrat::getNmae() const
{
	return (this->_name);
}

int Bureaucrat::getGrade() const
{
	return (this->_grade);
}

std::ostream&	operator<<(std::ostream& os, Bureaucrat const& rhs)
{
	os << "<" << rhs.getNmae() << ">, " << "bureaucrat grade <" << rhs.getGrade() << ">." << std::endl;
	return (os);
}

void	Bureaucrat::increment()
{
	this->_grade--;
	if (this->getGrade() < 1)
		throw Bureaucrat::GradeTooHighException();
}

void	Bureaucrat::decrement()
{
	this->_grade++;
		if (this->getGrade() > 150)
		throw Bureaucrat::GradeTooLowException();
}
