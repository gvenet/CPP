#include "../inc/Character.hpp"

int main(void)
{
	Character *me = new Character("me");
	std::cout << *me;
	return 0;
}