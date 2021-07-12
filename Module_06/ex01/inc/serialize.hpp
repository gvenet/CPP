#ifndef SERIALIZE_HPP
#define SERIALIZE_HPP
#include <iostream>
#include <string>
#include <cstdlib>
#include <cctype>
#include <random>
#include <ctime>
#include <unistd.h>

struct Data
{
	int n;
};

uintptr_t serialize(Data* ptr);
Data* deserialize(uintptr_t raw);

#endif