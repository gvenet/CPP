#include "../inc/serialize.hpp"

int main()
{
	Data ptr;
	ptr.n = 42;

	std::cout << deserialize(serialize(&ptr))->n << std::endl;
	return 0;
}
