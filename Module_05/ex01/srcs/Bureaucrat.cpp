#include "../inc/Bureaucrat.hpp"

//============================COPLIAN==========================

Bureaucrat::Bureaucrat() : _name("default"), _grade(150)
{
}

Bureaucrat::Bureaucrat(std::string const name, int grade) : _name(name), _grade(grade)
{
	if (this->_grade < 1)
		throw Bureaucrat::GradeTooHighException("Grade is to high");
	else if (this->_grade > 150)
		throw Bureaucrat::GradeTooLowException("Grade is to low");
}

Bureaucrat::Bureaucrat(Bureaucrat const &cpy) : _name(cpy._name), _grade(cpy._grade)
{
	if (this->_grade < 1)
		throw Bureaucrat::GradeTooHighException("Grade is to high");
	else if (this->_grade > 150)
		throw Bureaucrat::GradeTooLowException("Grade is to low");
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

//===========================OVERLOAD<<========================

std::ostream &operator<<(std::ostream &os, Bureaucrat const &b)
{
	os << b.getName() << ", bureaucrat grade " << b.getGrade() << std::endl;
	return os;
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
}

void Bureaucrat::decGrade(void)
{
	this->_grade++;
}

void Bureaucrat::signForm(Form &f) const
{
	if (f.getSignedStatus())
	{
		std::cout << *this << " cannot sign " << f
				  << " because the form is already signed." << std::endl;
	}
	else if (f.getGradeToSign() < this->_grade)
	{
		std::cout << *this << " cannot sign " << f
				  << " because it's grade is too low." << std::endl;
	}
	else
	{
		std::cout << *this << " signs " << f << std::endl;
	}
	f.beSigned(*this);
}