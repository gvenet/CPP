#ifndef ZOMBIEVENT_HPP
# define ZOMBIEVENT_HPP

# include <iostream>
# include <string>
# include "Zombie.hpp"

class ZombieEvent
{
private:

	std::string	_type;
public:

	ZombieEvent();
	~ZombieEvent();

	void 		setZombieType(std::string const &type);
	Zombie		*newZombie(std::string const &name);
	Zombie		*randomChump(void);
};

#endif
