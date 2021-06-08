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

public:
	Character();
	Character(std::string const &name);
	Character(Character const &);
	Character &operator=(Character const &);
	~Character();

	std::string const &getName() const;
	AWeapon *getWeapon() const;
	int getAP() const;
	
	void recoverAP();
	void equip(AWeapon *);
	void attack(Enemy *);
};

std::ostream &operator<<(std::ostream &os, Character const &);

#endif