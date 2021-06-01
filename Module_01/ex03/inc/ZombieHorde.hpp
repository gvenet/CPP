#ifndef ZOMBIEHORDE_HPP
# define ZOMBIEHORDE_HPP

# include <iostream>
# include <string>
# include "Zombie.hpp"

class ZombieHorde
{
private:

	Zombie *_Horde;
	int _nZ;
public:

	ZombieHorde(int nZ);
	~ZombieHorde();

	void advert(void) const;
};

#endif
