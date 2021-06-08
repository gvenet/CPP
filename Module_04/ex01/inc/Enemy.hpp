#ifndef ENEMY_HPP
#define ENEMY_HPP
#include <string>
#include <iostream>

class Enemy
{
protected:
	int _hp;
	std::string _type;

public:
	Enemy() {}
	Enemy(int hp, std::string const &type);
	Enemy(Enemy const &);
	virtual ~Enemy();
	Enemy &operator=(Enemy const &);

	std::string const &getType() const;
	int getHP() const;
	virtual void takeDamage(int);
	virtual void display(void);
};

std::ostream &operator<<(std::ostream &os, const Enemy &Enemy);

#endif