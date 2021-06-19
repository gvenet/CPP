#include "../inc/easyfind.hpp"
#include <vector>

int main(void)
{
	std::vector<int> v(10,42);

	std::for_each(v.begin(), v.end(), display);
	return 0;
}