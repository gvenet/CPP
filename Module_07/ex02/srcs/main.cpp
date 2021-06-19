#include "../inc/array.hpp"
#include "string"

int main(void)
{
	Array<int> a;

	Array<int> b(5);
	a = b;

	a.display();
	std::cout << std::endl;
	for (size_t i = 0; i < a.size(); i++)
		a[i] = i;
	a.display();
	std::cout << std::endl;
	b.display();
	std::cout << std::endl
			  << std::endl;

	Array<float> c(5);
	for (size_t i = 0; i < c.size(); i++)
		c[i] = 4.2;
	c.display();
	std::cout << std::endl
			  << std::endl;

	Array<std::string> d(5);
	std::string stab[5] = {"s1", "s2", "s3", "s4", "s5"};
	for (size_t i = 0; i < d.size(); i++)
		d[i] = stab[i];
	d.display();
	std::cout << std::endl;

	Array<std::string> e = d;
	for (size_t i = 0; i < 5; i++)
		e[i] = "ST";
	e.display();
	std::cout << std::endl
			  << std::endl;

	try
	{
		b[-1] = 2;
	}
	catch (const std::exception &e)
	{
		std::cerr << e.what() << '\n';
	}

	try
	{
		b[999] = 2;
	}
	catch (const std::exception &e)
	{
		std::cerr << e.what() << '\n';
	}

	return (0);
}
