#include "../inc/serialize.hpp"


void *serialize(void)
{
	std::string alphabet =  "0123456789abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char *raw = new char[sizeof(char) * 20];
	for (int i = 0; i < 8; i++)
		raw[i] = alphabet[(rand() % alphabet.size())];
	std::cout << raw << std::endl;
	raw >> 8;
	std::cout << raw << std::endl;
	
	return raw;
}

// Data *deserialize(void *raw)
// {

// }
