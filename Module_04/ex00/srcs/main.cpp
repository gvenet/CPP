#include "../inc/Sorcerer.hpp"
#include "../inc/Victim.hpp"
#include "../inc/Peon.hpp"

int main()
{
	Sorcerer robert("Robert", "the Magnificent");
	Victim jim("Jimmy");
	Peon joe("Joe");
	std::cout << robert << jim << joe;
	robert.polymorph(jim);
	robert.polymorph(joe);
	std::cout << std::endl
			  << std::endl;

	std::cout << "==========CONSTRUC==========" << std::endl;
	Sorcerer S(robert);
	Victim V(jim);
	Peon P(joe);
	std::cout << "============CPY=============" << std::endl
			  << S << V << P;

	S.polymorph(V);
	V = P;
	S.polymorph(V);
	S.polymorph(P);

	std::cout << "===========DESTRUCT=========" << std::endl;

	return 0;
}