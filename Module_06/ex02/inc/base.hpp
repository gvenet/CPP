#ifndef BASE_HPP
#define BASE_HPP
#include <iostream>
#include <string>
#include <random>
#include <ctime>
#include <unistd.h>

class Base{public:	virtual ~Base() {}};
class A : public Base{};
class B : public Base{};
class C : public Base{};

Base * generate(void);
#endif