/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moharras <moharras@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/04 12:21:10 by moharras          #+#    #+#             */
/*   Updated: 2021/09/07 16:09:36 by moharras         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP
#include <iostream>
#include "./Bureaucrat.hpp"
class Bureaucrat;
class Form
{
private:
	std::string const	_name;
	bool				_sign;
	int const			_signGrade;
	int	const			_executeGrade;
public:
	Form();
	virtual	~Form();
	Form(std::string const name, int const signGrade, int const executeGrade);
	Form(Form const& rhs);
	Form& operator=(Form const& rhs);
	class GradeTooHighException : public std::exception
	{
		virtual const char* what() const throw();
	};
	class GradeTooLowException : public std::exception
	{
		virtual const char* what() const throw();
	};
	class FormisAlreadySigned : public std::exception
	{
		virtual const char* what() const throw();
	};
	class UnsignedFormException : public std::exception
	{
		virtual const char* what() const throw();
	};
	void				beSigned(Bureaucrat& rhs);
	std::string const&	getName() const;
	int const&			getSignGrade() const;
	int const&			getExecuteGrade() const;
	bool				getSign() const;
	virtual void	execute(Bureaucrat const& executor) const;
	virtual void	action() const = 0;
};
std::ostream&	operator<<(std::ostream& os, Form const& rhs);
#endif /* FORM_HPP */
