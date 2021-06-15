/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gvenet <gvenet@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/15 14:39:28 by gvenet            #+#    #+#             */
/*   Updated: 2021/06/15 14:39:29 by gvenet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Form.hpp"

//============================COPLIAN==========================

Form::Form(std::string const &name, int gradeToSign, int gradeToExecut)
	: _name(name), _signedStatus(false), _gradeToSign(gradeToSign), _gradeToExecut(gradeToExecut)
{
	if (this->getGradeToSign() < 1 || this->getGradeToExecute() < 1)
		throw Form::GradeTooHighException();
	else if (this->getGradeToSign() > 150 || this->getGradeToExecute() > 150)
		throw Form::GradeTooLowException();
}

Form::Form(Form const &cpy)
	: _name(cpy._name), _signedStatus(cpy._signedStatus), _gradeToSign(cpy._gradeToSign), _gradeToExecut(cpy._gradeToExecut)
{
	*this = cpy;
}

Form &Form::operator=(Form const &op)
{
	this->_signedStatus = op._signedStatus;
	return *this;
}

Form::~Form()
{
}

//============================GETTERS==========================

bool Form::getSignedStatus(void) const
{
	return this->_signedStatus;
}

std::string Form::getName(void) const
{
	return this->_name;
}

int Form::getGradeToSign(void) const
{
	return this->_gradeToSign;
}

int Form::getGradeToExecute(void) const
{
	return this->_gradeToExecut;
}

//============================METHODS==========================

void Form::beSigned(const Bureaucrat &b)
{
	if (this->_signedStatus == true)
		throw Form::ExceptionMsg("Form already signed");
	else if (b.getGrade() > this->_gradeToSign)
		throw Form::ExceptionMsg("Form can't be signed : Insufficient grade");
	else
		this->_signedStatus = true;
}

void Form::execute(Bureaucrat const &executor) const
{
	if (executor.getGrade() > this->_gradeToExecut)
		throw Form::ExceptionMsg("Form can't be execute : Insufficient grade");
	else if (!this->_signedStatus)
		throw Form::ExceptionMsg("Form can't be execute : Form is unsigned");
	std::cout << executor << " execute " << *this << std::endl;
}

//===========================OVERLOAD<<========================

std::ostream &operator<<(std::ostream &os, Form const &rhs)
{
	os << rhs.getName() << " [signed <" << rhs.getSignedStatus() << ">; Sign <" << rhs.getGradeToSign() << ">; Execut <" << rhs.getGradeToExecute() << ">]";
	return os;
}
