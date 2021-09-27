/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MyPb.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moharras <moharras@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/12 11:15:37 by moharras          #+#    #+#             */
/*   Updated: 2021/06/15 13:03:11 by moharras         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MyPb_H
# define MyPb_H
#include <string>
#include <iostream>
#include <iomanip>

#define RESET   "\033[0m"
#define RED     "\033[31m"      /* Red */
#define GREEN   "\033[32m"      /* Green */
#define YELLOW  "\033[33m"      /* Yellow */

class Cantact{
private:
    std::string _FirstName;
    std::string _LastName;
    std::string _NickName;
    std::string _Login;
    std::string _PostalAdreass;
    std::string _EmailAdress;
    std::string _PhoneNumber;
    std::string _BirthdayDate;
    std::string _FavoriteMeal;
    std::string _UnderWearColor;
    std::string _DarkestSecret;
public:
    void    FillInformation(void);
    void    ShowInformation(Cantact *Ct, int i) const;
    void    ShowCantact (void) const;
};

void    Print(std::string str);
void	HundleGetline(std::string &str);
int		HundleIndex(int i);
#endif
