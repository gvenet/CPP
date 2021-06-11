#include "../inc/Bureaucrat.hpp"
#include <sstream>

int main(int ac, char **av)
{
	if (ac != 2)
		return 1;
	std::stringstream str; str << av[1];int x; str >> x; //char* to int
	Bureaucrat *b1 = new Bureaucrat("b1", x);
	try
	{
		if (b1->getGrade() < 1)
			throw Bureaucrat::GradeTooHighException("Grade is to high");
		else if (b1->getGrade() > 150)
			throw Bureaucrat::GradeTooLowException("Grade is to low");
	}
	catch (std::exception const &e)
	{
		std::cout << "ERROR : " << e.what() << " => "<<b1->getName() << " : " << b1->getGrade() << std::endl;
		std::cout << "CORRECTION : " << std::endl; 
		while(b1->getGrade() > 150)
			b1->incGrade();
		while(b1->getGrade() < 1)
			b1->decGrade();
	}
	std::cout << b1->getName() << " : " << b1->getGrade() << std::endl;
	delete b1;
	return 0;
}