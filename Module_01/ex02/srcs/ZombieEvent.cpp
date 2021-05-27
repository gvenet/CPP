#include "../inc/ZombieEvent.hpp"

ZombieEvent::ZombieEvent(void)
{
}

ZombieEvent::~ZombieEvent(void)
{
}

std::string ZombieEvent::setZombieType(Zombie type)
{
	
}

void ZombieEvent::advert(void) const
{
	std::cout << "<" << get_name() << " (" << get_type() << ")> Braiiiiinnssss ...." << std::endl;
}