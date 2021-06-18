#include "../inc/base.hpp"

int main()
{
	srand((unsigned)time(NULL) * getpid());

	for (int i = 0; i < 10; i++)
	{
		Base *X = generate();
		identify_from_pointer(X);
		identify_from_reference(*X);
		delete X;
		std::cout << std::endl;
	}
	return 0;
}
