/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moharras <moharras@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/13 12:10:47 by moharras          #+#    #+#             */
/*   Updated: 2021/06/15 13:53:34 by moharras         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./MyPb.hpp"

void	trim(std::string &str)
{
	while (!str.empty() && isspace(str.front()))
		str.erase(0, 1);
	while (!str.empty() && isspace(str.back()))
		str.erase(str.size() - 1, 1);
}

int		HundleIndex(int i)
{
	std ::string Index;
	
	std::cout << "Set the index of the contact which you want: "; HundleGetline(Index);
	if (Index == "")
		return (-1);
	for (int i = 0; Index[i]; i++)
	{
		if (Index[i] > '9' || Index[i] < '0')
		{
			std::cout << RED << "Bad Index" << RESET << std::endl;
			return (-1);
		}
	}
    int Index_int = std::stoi(Index);
    if (Index_int <= 0 || Index_int > i)
    {
        std::cout << RED << "Index not found" << RESET << std::endl;
        return (-1);
    }
	return (Index_int);
}

void    Print(std::string str)
{
    if (str.length() <= 10)
        std::cout << str;
    else
        std::cout << str.substr(0, 9) + ".";
}

void	HundleGetline(std::string &str)
{
	if(!std::getline(std::cin, str))
		exit (0);
	trim (str);
}

int main(void)
{
	Cantact Ct[7];
	std::string str;
	int	i;

	i = 0;
	while (1)
	{
		std::cout << "Welcome to your contact: "; HundleGetline(str);
		if (str == "ADD")
		{
			if (i >= 8)
				std::cout << "you have already 8th contacts, you do not have the right for the 9th one" << std::endl;
			else
			{
				Ct[i].FillInformation();
				i++;
			}
		}
		else if (str == "")
			continue ;
		else if (str == "SEARCH")
		{
			Ct[i].ShowInformation(Ct, i);
		}
		else if (str == "EXIT")
			exit(0);
		else
			std::cout << RED << "Command not found" << RESET << std::endl;
	}
	return (0);
}
