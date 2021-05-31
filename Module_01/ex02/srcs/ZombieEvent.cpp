#include "ZombieEvent.hpp"

ZombieEvent::ZombieEvent()
{
	this->_type = "";
}

ZombieEvent::~ZombieEvent()
{
}

void ZombieEvent::setZombieType(std::string const &type)
{
	this->_type = type;
}

Zombie *ZombieEvent::newZombie(std::string const &name)
{
	return (new Zombie(this->_type, name));
}

Zombie *ZombieEvent::randomChump(void)
{
	Zombie *zombie;

	zombie = newZombie(Zombie::randomName());
	zombie->advert();
	return (zombie);
}
