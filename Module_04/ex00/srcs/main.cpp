#include "../inc/Sorcerer.hpp"
#include "../inc/Victim.hpp"
#include "../inc/Peon.hpp"

int main()
{
	Sorcerer Robert("Robert", "The Magificient");
	Victim Jean("Jean");
	Peon Garzog("Garzog");

	std::cout << std::endl;
	std::cout << Robert << std::endl;
	std::cout << Jean << std::endl;
	
	
	std::cout << std::endl;
	Robert.polymorph(Jean);
	Robert.polymorph(Garzog);

	std::cout << std::endl;
	return 0;
}