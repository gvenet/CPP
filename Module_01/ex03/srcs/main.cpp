#include "Zombie.hpp"
#include "ZombieHorde.hpp"
#include <cstdlib>
#include <ctime>

int main(void)
{
	ZombieHorde Horde(5);

	srand((unsigned int)time(NULL));
	std::cout << std::endl;
	return (0);
}
