/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moharras <moharras@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/02 12:27:50 by moharras          #+#    #+#             */
/*   Updated: 2021/09/07 15:54:25 by moharras         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP
#include <iostream>

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
	class GradeTooHighException : public std::exception
	{
		virtual const char* what() const throw();
	};
	class GradeTooLowException : public std::exception
	{
		virtual const char* what() const throw();
	};
	std::string	getNmae( void ) const;
	int			getGrade( void ) const;
	void		increment();
	void		decrement();
};

std::ostream&	operator<<(std::ostream& os, Bureaucrat const& rhs);
#endif