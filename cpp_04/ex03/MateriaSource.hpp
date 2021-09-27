/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moharras <moharras@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/31 13:53:13 by moharras          #+#    #+#             */
/*   Updated: 2021/09/01 16:16:41 by moharras         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP
#include "./IMateriaSource.hpp"
#include "./AMateria.hpp"

class MateriaSource : public IMateriaSource 
{
private:
	AMateria    *inventory[4];
	int         _nbMateria;
public:
	MateriaSource();
	virtual	~MateriaSource();
	MateriaSource&	operator=(MateriaSource const& rhs);
	virtual void learnMateria(AMateria*);
	virtual AMateria* createMateria(std::string const & type);
	void	DeleteInventory();
};

#endif