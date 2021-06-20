#include "../inc/easyfind.hpp"

int main(void)
{
	std::vector<int> vec;

	vec.push_back(12);
	vec.push_back(42);
	vec.push_back(54);

	easyfind(vec, 300);
	easyfind(vec, 0);
	easyfind(vec, 42);
	std::cout << std::endl;

	std::list<int> lst;
	lst.push_back(12);
	lst.push_back(42);
	lst.push_back(54);

	easyfind(lst, 300);
	easyfind(lst, 0);
	easyfind(lst, 42);

	return 0;
}