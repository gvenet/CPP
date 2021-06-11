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
	_name = op._name;
	_name = op._grade;
	return *this;
}

Bureaucrat::~Bureaucrat()
{
}

//===========================OVERLOAD<<========================

std::ostream &operator<<(std::ostream &os, Bureaucrat const &rhs)
{
	os << rhs.getName() << ", bureaucrat grade " << rhs.getGrade();
	return os;
}

//============================METHODS==========================

int Bureaucrat::getGrade(void) const
{
	if (this->_grade < 1)
		throw Bureaucrat::GradeTooHighException("Grade is to high");
	else if (this->_grade > 150)
		throw Bureaucrat::GradeTooLowException("Grade is to low");
	return this->_grade;
}

std::string Bureaucrat::getName(void) const
{
	return _name;
}

void Bureaucrat::incGrade(void)
{
	_grade--;
}

void Bureaucrat::decGrade(void)
{
	_grade++;
}
