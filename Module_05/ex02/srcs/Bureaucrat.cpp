#include "../inc/Bureaucrat.hpp"

//============================COPLIAN==========================

Bureaucrat::Bureaucrat(std::string const name, int grade) : _name(name), _grade(grade)
{
	if (this->_grade < 1)
		throw Bureaucrat::GradeTooHighException();
	else if (this->_grade > 150)
		throw Bureaucrat::GradeTooLowException();
}

Bureaucrat::Bureaucrat(Bureaucrat const &cpy) : _name(cpy._name), _grade(cpy._grade)
{
	if (this->_grade < 1)
		throw Bureaucrat::GradeTooHighException();
	else if (this->_grade > 150)
		throw Bureaucrat::GradeTooLowException();
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

//============================GETTERS==========================

int Bureaucrat::getGrade(void) const
{
	return this->_grade;
}

std::string const &Bureaucrat::getName(void) const
{
	return this->_name;
}

//============================METHODS==========================

void Bureaucrat::incGrade(void)
{
	this->_grade--;
	if (this->_grade < 1)
		throw Bureaucrat::GradeTooHighException();
}

void Bureaucrat::decGrade(void)
{
	this->_grade++;
	if (this->_grade > 150)
		throw Bureaucrat::GradeTooLowException();
}

void Bureaucrat::signForm(Form &f) const
{
	if (f.getSignedStatus())
		std::cout << *this << " can't sign " << f << " because the form is already signed." << std::endl;
	else if (f.getGradeToSign() < this->_grade)
		std::cout << *this << " can't sign " << f << " because it's grade is too low." << std::endl;
	else
		std::cout << *this << " signs " << f << std::endl;
	f.beSigned(*this);
}

//===========================OVERLOAD<<========================

std::ostream &operator<<(std::ostream &os, Bureaucrat const &b)
{
	os << b.getName() << " [grade <" << b.getGrade() << ">]";
	return os;
}
