#include "../inc/FragTrap.hpp"

int main(void)
{
	fragTrap fragtrap("FR4G-TP");
	
	std::cout << "<|NAME   \t|EP\t|HP\t|>" << std::endl;
	fragtrap.rangedAttack("ArmorManiac");
	fragtrap.rangedAttack("ArmorManiac");
	fragtrap.rangedAttack("ArmorManiac");
	fragtrap.meleeAttack("ArmorManiac");
	fragtrap.meleeAttack("ArmorManiac");
	fragtrap.meleeAttack("ArmorManiac");
	fragtrap.takeDamage(20);
	fragtrap.takeDamage(2);
	fragtrap.meleeAttack("ArmorManiac");
	fragtrap.takeDamage(25);
	fragtrap.takeDamage(20);
	fragtrap.takeDamage(50);
	fragtrap.armorUpUp();
	fragtrap.takeDamage(26);
	fragtrap.beRepaired(30);
	
	return (0);
}
