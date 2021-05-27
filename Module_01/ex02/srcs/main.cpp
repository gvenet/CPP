#include "../inc/Zombie.hpp"
#include "../inc/ZombieEvent.hpp"

int main(void)
{
	Zombie jean1 = Zombie("jean1");
	Zombie jean2 = Zombie("jean2");

	jean1.advert();
	jean2.advert();
	return (0);
}
