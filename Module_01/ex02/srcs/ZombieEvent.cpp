#include "../inc/ZombieEvent.hpp"
#include "../inc/Zombie.hpp"

ZombieEvent::ZombieEvent(std::string type) : _type(type)
{
}

ZombieEvent::~ZombieEvent(void)
{

}

std::string ZombieEvent::setZombieType(std::string const & _type)
{
	return this->_type;
}

Zombie *ZombieEvent::newZombie(std::string const &name)
{
	return (new Zombie(this->type, name));
}
