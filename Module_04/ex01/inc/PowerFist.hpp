#ifndef POWERFIST_HPP
#define POWERFIST_HPP
#include <string>
#include <iostream>
#include "../inc/AWeapon.hpp"

class PowerFist : public AWeapon
{
private:
public:
	PowerFist();
	PowerFist(PowerFist const &);
	PowerFist &operator=(PowerFist const &);
	virtual ~PowerFist();

	void attOutput() const;
	virtual void attack() const;
};

#endif