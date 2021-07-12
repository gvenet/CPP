/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gvenet <gvenet@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/15 14:21:53 by gvenet            #+#    #+#             */
/*   Updated: 2021/07/12 15:42:40 by gvenet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
	this->_grade = op._grade;
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

void Bureaucrat::signForm(Form &form) const
{
	if (form.getSignedStatus())
		std::cout << *this << " can't sign " << form << " because the form is already signed." << std::endl;
	else if (form.getGradeToSign() < this->_grade)
		std::cout << *this << " can't sign " << form << " because it's grade is too low." << std::endl;
	else
		std::cout << *this << " signs " << form << std::endl;
	form.beSigned(*this);
}

//===========================OVERLOAD<<========================
std::ostream &operator<<(std::ostream &os, Bureaucrat const &b)
{
	os << b.getName() << " [grade <" << b.getGrade() << ">]";
	return os;
}
