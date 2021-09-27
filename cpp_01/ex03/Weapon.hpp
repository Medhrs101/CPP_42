#ifndef WEAPON_HPP
#define WEAPON_HPP
#include <iostream>

class Weapon
{
private:
	std::string	_weaponType;
public:
	Weapon(std::string);
	~Weapon(void);
	const std::string&	getType(void);
	void				setType(std::string);
};

#endif