#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <cstdio>
#include <iostream>
#include <string>

class Weapon
{
private:

	std::string _type;
public:

	Weapon(std::string type);
	~Weapon();
	const std::string & getType() const;
	std::string setType(std::string& type);

};

#endif