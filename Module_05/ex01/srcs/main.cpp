#include "../inc/Bureaucrat.hpp"
#include "../inc/Form.hpp"
#include <sstream>

int main(int ac, char **av)
{
	if (ac != 2)
		return 1;
	std::stringstream str;
	str << av[1];
	int x;
	str >> x; //char* to int
	Bureaucrat *Jim = new Bureaucrat("Jim", x);
	Form *f1 = new Form("E24", 100, 120);
	try
	{
		Jim->getGrade();
		f1->beSigned(*Jim);
	}
	catch (std::exception const &e)
	{
		std::cout << "ERROR : " << e.what() << std::endl;
		delete Jim;
		delete f1;
		return 1;
	}
	std::cout << *Jim << *f1;

	return 0;
}