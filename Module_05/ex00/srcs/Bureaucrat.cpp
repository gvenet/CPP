#include "../inc/Bureaucrat.hpp"

//============================COPLIAN==========================

Bureaucrat::Bureaucrat() : _name("default"), _grade(150)
{
}

Bureaucrat::Bureaucrat(std::string const name, int grade) : _name(name), _grade(grade)
{
}

Bureaucrat::Bureaucrat(Bureaucrat const &cpy) : _name(cpy._name), _grade(cpy._grade)
{
	*this = cpy;
}

Bureaucrat &Bureaucrat::operator=(Bureaucrat const &op)
{
	this->_name = op._name;
	this->_name = op._grade;
	return *this;
}

Bureaucrat::~Bureaucrat()
{
}

//============================METHODS==========================

int Bureaucrat::getGrade(void)
{
	return this->_grade;
}

std::string Bureaucrat::getName(void)
{
	return this->_name;
}

void Bureaucrat::incGrade(void)
{
	this->_grade--;
}

void Bureaucrat::decGrade(void)
{
	this->_grade++;
}
