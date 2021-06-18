#include "../inc/serialize.hpp"

int main()
{
	srand((unsigned)time(NULL) * getpid());

	for (int i = 0; i < 10; i++)
	{
		deserialize(serialize());
		std::cout << std::endl;
	}
	return 0;
}
