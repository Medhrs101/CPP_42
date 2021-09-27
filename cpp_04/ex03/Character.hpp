/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moharras <moharras@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/30 16:49:35 by moharras          #+#    #+#             */
/*   Updated: 2021/09/01 16:16:47 by moharras         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
#define CHARACTER_HPP
#include "./ICharacter.hpp"
#include "./AMateria.hpp"

class Character : public ICharacter
{
private:
	std::string _Name;
	AMateria    *inventory[4];
	int         _nbMateria;
public:
	Character();
	Character(std::string);
	Character (Character const& rhs);
	Character&  operator=(Character const& rhs);
	~Character();
	virtual std::string const & getName() const;
	virtual void equip(AMateria* m);
	virtual void unequip(int idx);
	virtual void use(int idx, ICharacter& target);
	void	DeleteInventory();
};

#endif