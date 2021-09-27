/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moharras <moharras@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/01 15:03:47 by moharras          #+#    #+#             */
/*   Updated: 2021/09/01 16:57:00 by moharras         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./AMateria.hpp"
#include "./IMateriaSource.hpp"
#include "./MateriaSource.hpp"
#include "./IMateriaSource.hpp"
#include "./ICharacter.hpp"
#include "./Character.hpp"
#include "./Cure.hpp"
#include "./Ice.hpp"

int main()
{
    IMateriaSource* src = new MateriaSource();
    src->learnMateria(new Ice());
    src->learnMateria(new Cure());
    ICharacter* me = new Character("me");
    AMateria* tmp;
    tmp = src->createMateria("ice");
    me->equip(tmp);
    tmp = src->createMateria("cure");
    me->equip(tmp);
    ICharacter* bob = new Character("bob");
    me->use(0, *bob);
    me->use(1, *bob);
    delete bob;
    delete me;
    delete src;
    return 0;
}