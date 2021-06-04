#include "../inc/FragTrap.hpp"

int main(void)
{
	fragTrap test("Baltus");
	
	std::cout << test.getName() << " " << test.getHp() << " " << test.getEnergy() << std::endl;
	return (0);
}
