/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MyPb.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moharras <moharras@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/13 20:36:48 by moharras          #+#    #+#             */
/*   Updated: 2021/06/15 16:57:23 by moharras         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./MyPb.hpp"

void    Cantact::FillInformation(void)
{
    std::cout << GREEN << "first name      : " << RESET; HundleGetline(_FirstName);
    std::cout << GREEN << "last name       : " << RESET; HundleGetline(_LastName);
    std::cout << GREEN << "nickname        : " << RESET; HundleGetline(_NickName);
    std::cout << GREEN << "login           : " << RESET; HundleGetline(_Login);
    std::cout << GREEN << "postal address  : " << RESET; HundleGetline(_PostalAdreass);
    std::cout << GREEN << "email address   : " << RESET; HundleGetline(_EmailAdress);
    std::cout << GREEN << "phone number    : " << RESET; HundleGetline(_PhoneNumber);
    std::cout << GREEN << "birthday date   : " << RESET; HundleGetline(_BirthdayDate);
    std::cout << GREEN << "favorite meal   : " << RESET; HundleGetline(_FavoriteMeal);
    std::cout << GREEN << "underwear color : " << RESET; HundleGetline(_UnderWearColor);
    std::cout << GREEN << "darkest secret  : " << RESET; HundleGetline(_DarkestSecret);
}

void    Cantact::ShowCantact(void) const
{
    std::cout << GREEN << "first name      : " << RESET << _FirstName << std::endl;
    std::cout << GREEN << "last name       : " << RESET << _LastName << std::endl;
    std::cout << GREEN << "nickname        : " << RESET << _NickName << std::endl;
    std::cout << GREEN << "login           : " << RESET << _Login << std::endl;
    std::cout << GREEN << "postal address  : " << RESET << _PostalAdreass << std::endl;
    std::cout << GREEN << "email address   : " << RESET << _EmailAdress << std::endl;
    std::cout << GREEN << "phone number    : " << RESET << _PhoneNumber << std::endl;
    std::cout << GREEN << "birthday date   : " << RESET << _BirthdayDate << std::endl;
    std::cout << GREEN << "favorite meal   : " << RESET << _FavoriteMeal << std::endl;
    std::cout << GREEN << "underwear color : " << RESET << _UnderWearColor << std::endl;
    std::cout << GREEN << "darkest secret  : " << RESET << _DarkestSecret << std::endl;
}

void    Cantact::ShowInformation(Cantact *Ct, int i) const
{
	int index = 0;
    std::string c;
    if (i == 0)
    {
        std::cout << YELLOW << "There is no contact" << RESET << std::endl; 
        return ;
    }
	std::cout << GREEN << "*********************************************\n";
	std::cout << "*" << RESET << "     index" << GREEN << "|" << RESET << "first name" \
    << GREEN << "|" << RESET << " last name" << GREEN << "|" << RESET << "  nickname" << GREEN \
	<< "*\n*********************************************\n";
	while (index < i)
	{
		std::cout << GREEN << "*" << RESET << std::setw(10) << index + 1 << GREEN << "|" << RESET \
        << std::setw(10); Print(Ct[index]._FirstName); std::cout << GREEN << "|" << RESET \
        << std::setw(10); Print(Ct[index]._LastName); std::cout << GREEN << "|" << RESET \
        << std::setw(10); Print(Ct[index]._NickName); std::cout << GREEN \
        << "*\n*********************************************" << RESET << std::endl;
        index++;
	}
    if ((index = HundleIndex(i)) != -1)
        Ct[index - 1].ShowCantact();
}