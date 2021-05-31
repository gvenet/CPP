#include <iostream>
#include <string>
#include <cstdio>

int main(void)
{
	std::string str = "HI THIS IS BRAIN";
	std::string* strPtr;
	std::string& strRef = str;

	strPtr = &str;
	std::cout << "pointeur :  " << *strPtr << std::endl;
	std::cout << "reference : " << strRef << std::endl;
	return (0);
}
