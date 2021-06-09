#include "../inc/Enemy.hpp"

//=================================COPLIAN================================================================

Enemy::Enemy(int hp, std::string const &type) : _hp(hp), _type(type)
{
}

Enemy::Enemy(Enemy const &)
{
}

Enemy &Enemy::operator=(Enemy const &)
{
	return *this;
}

Enemy::~Enemy()
{
}

//==========================================GETTERS=======================================================

std::string const &Enemy::getType() const
{
	return this->_type;
}

int Enemy::getHP() const
{
	return this->_hp;
}

//=========================================METHODES======================================================

void Enemy::takeDamage(int dmg)
{

	std::cout << this->_type << " takes " << dmg << " points of damage." << std::endl;
	if ((this->getHP() - dmg) > 0)
	{
		this->_hp = (this->getHP() - dmg);
		this->display();
	}
	else
	{
		this->_hp = 0;
		this->display();
		delete this;
	}
}

void Enemy::display(void)
{
	std::cout << this->_type << " has " << this->_hp << " hp." << std::endl;
}
