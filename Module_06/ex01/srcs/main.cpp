#include "../inc/serialize.hpp"

int main()
{
	srand((unsigned)time(NULL));

	for (int i = 0; i < 10; i++)
		serialize();
	return 0;
}
