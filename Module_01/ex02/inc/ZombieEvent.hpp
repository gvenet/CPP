#ifndef ZOMBIE_EVENT_HPP
#define ZOMBIE_EVENT_HPP
#include <iostream>
#include <cstdio>

class ZombieEvent
{

private:
	std::string _type;

public:
	ZombieEvent(std::string type); 
	~ZombieEvent(void);

	std::string setZombieType(std::string const & _type);

};


#endif