#include "../inc/Sorcerer.hpp"
#include "../inc/Victim.hpp"
#include "../inc/Peon.hpp"

// int main()
// {
// 	Sorcerer Robert("Robert", "The Magificient");
// 	Victim Jean("Jean");
// 	Peon Garzog("Garzog");

// 	std::cout << std::endl;
// 	std::cout << Robert << std::endl;
// 	std::cout << Jean << std::endl;

// 	std::cout << std::endl;
// 	Robert.polymorph(Jean);
// 	Robert.polymorph(Garzog);

// 	std::cout << std::endl;
// 	return 0;
// }

int main()
{
	Sorcerer robert("Robert", "the Magnificent");
	Victim jim("Jimmy");
	Peon joe("Joe");
	std::cout << robert << jim << joe;
	robert.polymorph(jim);
	robert.polymorph(joe);
	return 0;
}