#include "Zombie.hpp"
#include "ZombieEvent.hpp"
#include <cstdlib>
#include <ctime>
#define COUNT 5

int main(void)
{
	ZombieEvent flying;
	ZombieEvent runner;
	Zombie *flyingZombies[COUNT];
	Zombie *runnerZombies[COUNT];

	srand((unsigned)time(NULL));
	flying.setZombieType("flying");
	std::cout << "# Creating " << COUNT << " Flying Zombie" << std::endl;
	for (int i = 0; i < COUNT; i++)
		flyingZombies[i] = flying.randomChump();
	runner.setZombieType("runner");
	std::cout << std::endl << "# Creating " << COUNT << " Runner Zombie" << std::endl;
	for (int i = 0; i < COUNT; i++)
		runnerZombies[i] = runner.randomChump();
	std::cout << std::endl << "# Clean All Flying Zombies" << std::endl;
	for (int i = 0; i < COUNT; i++)
		delete flyingZombies[i];
	std::cout << std::endl << "# Clean All Runner Zombies" << std::endl;
	for (int i = 0; i < COUNT; i++)
		delete runnerZombies[i];
	return (0);
}
