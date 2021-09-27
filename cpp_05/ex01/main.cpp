/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moharras <moharras@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/02 12:32:37 by moharras          #+#    #+#             */
/*   Updated: 2021/09/07 16:08:19 by moharras         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Bureaucrat.hpp"
#include "./Form.hpp"
int     main()
{
	try{
		Form Acte("Acte", 3, 2);
		Bureaucrat Ahmed("Ahmed", 2);
		Acte.beSigned(Ahmed);
		Ahmed.signForm(Acte);
		std::cout << Acte;
	}
	catch(std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	return (0);
}