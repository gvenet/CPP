#include "../inc/Bureaucrat.hpp"
#include <sstream>

int main(int ac, char **av)
{
	if (ac != 2)
		return 1;
	std::stringstream str; str << av[1];int x; str >> x; //char* to int
	Bureaucrat *Jim = new Bureaucrat("Jim", x);
	try
	{
		Jim->getGrade();
	}
	catch (std::exception const &e)
	{
		std::cout << "ERROR : " << e.what() << std::endl;
		delete Jim;
		return 1;
	}
	std::cout << *Jim << std::endl;
	
	delete Jim;
	return 0;
}