#include "../inc/Bureaucrat.hpp"
#include "../inc/Form.hpp"
#include "../inc/ShrubberyCreationForm.hpp"
#include <sstream>

int main(void)
{
	Bureaucrat Jim("Jim", 140);
	try
	{
		ShrubberyCreationForm file("fil");
		std::cout << file << std::endl;
		Jim.signForm(file);
		std::cout << file << std::endl;
	}
	catch (const std::exception &e)
	{
		std::cerr << "\e[01;31mError : " << e.what() << "\e[0m"<< std::endl;
	}

	return (0);
}
