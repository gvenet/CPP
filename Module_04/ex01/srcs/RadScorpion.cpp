#include "../inc/RadScorpion.hpp"

//=================================COPLIAN================================================================

RadScorpion::RadScorpion() : Enemy(80, "RadScorpion")
{
	std::cout << "* click click click *" << std::endl;
}

RadScorpion::RadScorpion(RadScorpion const &)
{
}

RadScorpion &RadScorpion::operator=(RadScorpion const &)
{
	return *this;
}

RadScorpion::~RadScorpion()
{
	std::cout << "* SPROTCH *" << std::endl;
}
