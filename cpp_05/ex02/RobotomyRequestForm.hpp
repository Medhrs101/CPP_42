/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moharras <moharras@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/05 16:23:01 by moharras          #+#    #+#             */
/*   Updated: 2021/09/06 15:21:27 by moharras         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP
#include <iostream>
#include "./Form.hpp"

class RobotomyRequestForm : public Form
{
private:
	std::string _target;
public:
	RobotomyRequestForm();
	RobotomyRequestForm (std::string);
	RobotomyRequestForm(RobotomyRequestForm const& rhs);
	RobotomyRequestForm&    operator=(RobotomyRequestForm const& rhs);
	virtual	~RobotomyRequestForm();
	virtual void    action() const;
};

#endif
