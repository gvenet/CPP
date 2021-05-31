#ifndef HUMAN_HPP
# define HUMAN_HPP

# include <iostream>
# include <string>
# include "Brain.hpp"

class Human
{
private:

	Brain *_Horde;
	int _nZ;
public:

	Human(int nZ);
	~Human();

};

#endif
