/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moharras <moharras@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/02 12:32:37 by moharras          #+#    #+#             */
/*   Updated: 2021/09/07 15:50:29 by moharras         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Bureaucrat.hpp"

int     main()
{
    try{
        Bureaucrat("&med", 151);
    }catch(std::exception &e){
        std::cout << e.what() << std::endl;
    }
    try{
        Bureaucrat Bu("med", 50);
        std::cout << Bu ;;
        Bu.increment();
        std::cout << Bu.getGrade() << std::endl;
    }catch(std::exception &e){
        std::cout << e.what() << std::endl;
    }
    try{
        Bureaucrat("&med", 0);
    }catch(std::exception &e){
        std::cout << e.what() << std::endl;
    }
    return (0);
}