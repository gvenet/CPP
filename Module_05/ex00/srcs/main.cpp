#include "../inc/Bureaucrat.hpp"

int main()
{
	Bureaucrat *b1 = new Bureaucrat("b1", 50);

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