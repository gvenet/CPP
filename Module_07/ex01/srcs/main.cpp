#include "../inc/iter.hpp"

int main()
{
	int a[5] = {0, 1, 2, 3, 4};
	iter(a, 5, display);
	std::cout << std::endl;

	float b[5] = {1.1, 2.2, 3.3, 4.4, 5.5};
	iter(b, 5, display);
	std::cout << std::endl;

	std::string c[5] = {"s1", "s2", "s3", "s4", "s5"};
	iter(c, 5, display);
	std::cout << std::endl;


//========================================
	int tab[] = {0, 1, 2, 3, 4};
	Awesome tab2[5];
	iter(tab, 5, print);
	iter(tab2, 5, print);

	return 0;
}
