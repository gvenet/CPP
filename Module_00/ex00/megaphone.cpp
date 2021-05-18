#include <cctype>
#include <iostream>
#include <cstring>
#include <cstdio>

int main(int ac, char **av)
{
	if (ac != 1)
	{
		for (int j = 1; j < ac; j++)
		{
			for (int i = 0; i < (int)strlen(av[j]); i++)
				putchar(toupper(av[j][i]));
		}
		std::cout << std::endl;
	}
	else
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	return (0);
}
