#ifndef PLASMARIFLE_HPP
#define PLASMARIFLE_HPP
#include <string>
#include <iostream>
#include "../inc/AWeapon.hpp"

class PlasmaRifle : public AWeapon
{
private:
public:
	PlasmaRifle();
	PlasmaRifle(PlasmaRifle const &);
	PlasmaRifle &operator=(PlasmaRifle const &);
	virtual ~PlasmaRifle();

	void attOutput() const;
	virtual void attack() const;
};

std::ostream &operator<<(std::ostream &os, const PlasmaRifle &PlasmaRifle);

#endif