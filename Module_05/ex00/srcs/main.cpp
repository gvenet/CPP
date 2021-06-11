#include "../inc/Bureaucrat.hpp"

int division(int a, int b) // Calcule a divisé par b.
{
	if (b == 0)
		throw Error(1, "Division by zéro", 2);
	else
		return a / b;
}

int main()
{
	int a, b;
	std::cout << "Valeur pour a : ";
	std::cin >> a;
	std::cout << "Valeur pour b : ";
	std::cin >> b;

	try
	{
		std::cout << a << " / " << b << " = " << division(a, b) << std::endl;
	}
	catch (std::exception const &e)
	{
		std::cerr << "ERROR : " << e.what() << std::endl;
	}

	return 0;
}