/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moharras <moharras@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/05 15:46:24 by moharras          #+#    #+#             */
/*   Updated: 2021/09/06 16:15:44 by moharras         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./ShrubberyCreationForm.hpp"
#include <fstream>

ShrubberyCreationForm::ShrubberyCreationForm()
{
    std::cout << "Default Constructor called from ShrubberyCreationFrom" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target):
Form("shrubbery", 145, 137), _target(target)
{
    std::cout << "Parametrized Constructor called from ShrubberyCreationFrom" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const& rhs):
Form(rhs), _target(rhs._target)
{
    std::cout << "Copy Constructr called from ShrubberyCreationForm" << std::endl;
}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(ShrubberyCreationForm const& rhs)
{
    this->_target = rhs._target;
    Form::operator=(rhs);
    return (*this);
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
    std::cout << "Destructor called from ShrubberyCreationFrom" << std::endl;
}

void    ShrubberyCreationForm::action() const
{
    std::ofstream outFile(this->_target + "_shrubbery");
    if (!outFile.is_open())
        outFile.open(this->_target + "_shrubbery");
outFile << "              .     .  .      +     .      .          . " << std::endl;
outFile << "     .       .      .     #       .           . " << std::endl;
outFile << "        .      .         ###            .      .      . " << std::endl;
outFile << "      .      .   \"#:. .:##\"##:. .:#\"  .      . " << std::endl;
outFile << "          .      . \"####\"###\"####\"  . " << std::endl;
outFile << "       .     \"#:.    .:#\"###\"#:.    .:#\"  .        .       . " << std::endl;
outFile << "  .             \"#########\"#########\"        .        . " << std::endl;
outFile << "        .    \"#:.  \"####\"###\"####\"  .:#\"   .       . " << std::endl;
outFile << "     .     .  \"#######\"\"##\"##\"\"#######\"                  . " << std::endl;
outFile << "                .\"##\"#####\"#####\"##\"           .      . " << std::endl;
outFile << "    .   \"#:. ...  .:##\"###\"###\"##:.  ... .:#\"     . " << std::endl;
outFile << "      .     \"#######\"##\"#####\"##\"#######\"      .     . " << std::endl;
outFile << "    .    .     \"#####\"\"#######\"\"#####\"    .      . " << std::endl;
outFile << "            .     \"      000      \"    .     . " << std::endl;
outFile << "       .         .   .   000     .        .       . " << std::endl;
outFile << ".. .. ..................O000O........................ ...... " << std::endl;
}
