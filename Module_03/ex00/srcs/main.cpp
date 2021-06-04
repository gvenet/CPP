#include "../inc/FragTrap.hpp"

int main(void)
{
	fragTrap fragtrap("FR4G-TP");
	
	std::cout << "<|NAME   \t|EP\t|HP\t|>" << std::endl;
	fragtrap.rangedAttack("ArmorManiac");
	fragtrap.rangedAttack("ArmorManiac");
	fragtrap.meleeAttack("ArmorManiac");
	fragtrap.meleeAttack("ArmorManiac");
	fragtrap.meleeAttack("ArmorManiac");
	fragtrap.meleeAttack("ArmorManiac");
	fragtrap.meleeAttack("ArmorManiac");
	fragtrap.meleeAttack("ArmorManiac");
	fragtrap.meleeAttack("ArmorManiac");
	fragtrap.meleeAttack("ArmorManiac");
	fragtrap.takeDamage(20);
	fragtrap.takeDamage(2);
	fragtrap.takeDamage(5);
	fragtrap.takeDamage(6);
	fragtrap.takeDamage(20);
	fragtrap.beRepaired(50);
	fragtrap.beRepaired(50);
	fragtrap.beRepaired(50);
	fragtrap.beRepaired(50);
	fragtrap.beRepaired(50);
	fragtrap.beRepaired(50);
	fragtrap.beRepaired(50);
	fragtrap.beRepaired(50);
	fragtrap.beRepaired(50);
	return (0);
}
