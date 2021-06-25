#ifndef CHARACTER_HPP
#define CHARACTER_HPP
#include <string>
#include <iostream>
#include "../inc/AWeapon.hpp"
#include "../inc/Enemy.hpp"

class Character
{
private:
	std::string _name;
	int _AP;
	AWeapon *_wp;
	Character();

public:
	Character(std::string const &name);
	Character(Character const &cpy);
	Character &operator=(Character const &op);
	virtual ~Character();

	std::string const &getName() const;
	AWeapon *getWeapon() const;
	int getAP() const;

	void recoverAP();
	void equip(AWeapon *wp);
	void attack(Enemy *enemy);
};

std::ostream &operator<<(std::ostream &os, Character const &character);

#endif