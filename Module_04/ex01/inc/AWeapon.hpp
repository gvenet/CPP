#ifndef WEAPON_HPP
#define WEAPON_HPP
#include <string>
#include <iostream>

class AWeapon
{
protected:
	std::string _name;
	int _apcost;
	int _damage;
	AWeapon();

public:
	AWeapon(std::string const &name, int apcost, int damage);
	AWeapon(AWeapon const &cpy);
	virtual ~AWeapon();
	AWeapon &operator=(AWeapon const &op);

	std::string const &getName() const;
	int getAPCost() const;
	int getDamage() const;

	virtual void attack() const = 0;
};

#endif