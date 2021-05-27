#include <iostream>
#include <string>

void byPtr(std::string* str)
{
	*str += " and ponies (byPtr)";
}

void byConstPtr(std::string const * str)
{
	std::cout << *str << std::endl;
}

void byRef(std::string& str)
{
	str += " and bears (byRef)";
}

void byConstRef(std::string const & str)
{
	std::cout << str << std::endl;
}

int main(void)
{
	std::string str = "i like butterflies (ptr)";

	std::cout << str << std::endl;
	byPtr(&str);
	byConstPtr(&str);
	
	str = "i like otters (ref)";

	std::cout << str << std::endl;
	byRef(str);
	byConstRef(str);

	return (0);
};
