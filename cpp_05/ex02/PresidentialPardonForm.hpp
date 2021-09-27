/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moharras <moharras@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/05 16:34:20 by moharras          #+#    #+#             */
/*   Updated: 2021/09/06 15:50:29 by moharras         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP
#include "./Form.hpp"
#include <iostream>

class PresidentialPardonForm : public Form
{
private:
	std::string	_target;
public:
	PresidentialPardonForm(/* args */);
	PresidentialPardonForm(std::string target);
	PresidentialPardonForm(PresidentialPardonForm const& rhs);
	PresidentialPardonForm&     operator=(PresidentialPardonForm const& rhs);
	virtual	~PresidentialPardonForm();
	virtual void	action() const;
};

#endif
