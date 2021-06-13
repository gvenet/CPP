#include "../inc/Bureaucrat.hpp"

//============================COPLIAN==========================

Bureaucrat::Bureaucrat() : _name("default"), _grade(150)
{
}

Bureaucrat::Bureaucrat(std::string const name, int grade) : _name(name), _grade(grade)
{
	if (this->_grade < 1)
		throw Bureaucrat::GradeTooHighException("Bureaucrat::GradeTooHighException");
	else if (this->_grade > 150)
		throw Bureaucrat::GradeTooLowException("Bureaucrat::GradeTooLowException");
}

Bureaucrat::Bureaucrat(Bureaucrat const &cpy) : _name(cpy._name), _grade(cpy._grade)
{
	if (this->_grade < 1)
		throw Bureaucrat::GradeTooHighException("Bureaucrat::GradeTooHighException");
	else if (this->_grade > 150)
		throw Bureaucrat::GradeTooLowException("Bureaucrat::GradeTooLowException");
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

//============================METHODS==========================

int Bureaucrat::getGrade(void) const
{
	return this->_grade;
}

std::string Bureaucrat::getName(void) const
{
	return this->_name;
}

void Bureaucrat::incGrade(void)
{
	this->_grade--;
	if (this->_grade < 1)
		throw Bureaucrat::GradeTooHighException("Bureaucrat::GradeTooHighException");
	

}

void Bureaucrat::decGrade(void)
{
	this->_grade++;
	if (this->_grade > 150)
		throw Bureaucrat::GradeTooLowException("Bureaucrat::GradeTooLowException");
}

//===========================OVERLOAD<<========================

std::ostream &operator<<(std::ostream &os, Bureaucrat const &rhs)
{
	os << rhs.getName() << " [grade <" << rhs.getGrade() << ">]";
	return os;
}
