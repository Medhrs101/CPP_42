/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moharras <moharras@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/02 12:27:50 by moharras          #+#    #+#             */
/*   Updated: 2021/09/07 15:51:59 by moharras         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP
#include <iostream>
#include "./Form.hpp"

class Form;
class Bureaucrat
{
private:
	std::string const   _name;
	int					_grade;
public:
	Bureaucrat();
	Bureaucrat(std::string const, int const);
	Bureaucrat(Bureaucrat const&);
	~Bureaucrat();
	Bureaucrat&	operator=(Bureaucrat const&	rhs);
	std::string	getNmae( void ) const;
	int	getGrade( void ) const;
	class GradeTooHighException : public std::exception
	{
		virtual const char* what() const throw();
	};
	class GradeTooLowException : public std::exception
	{
		virtual const char* what() const throw();
	};
	void	signForm(Form & rhs);
	void	executeForm(Form const& form);
	void	increment();
	void	decrement();
};

std::ostream&	operator<<(std::ostream& os, Bureaucrat const& rhs);
#endif