/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gvenet <gvenet@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/15 14:39:40 by gvenet            #+#    #+#             */
/*   Updated: 2021/06/15 14:39:41 by gvenet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/RobotomyRequestForm.hpp"

std::string const RobotomyRequest = "RobotomyRequest";

RobotomyRequestForm::RobotomyRequestForm(std::string const &target) : Form(RobotomyRequest, 72, 45), _target(target)
{
	srand((unsigned int)time(NULL));
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &cpy) : Form(cpy), _target(cpy._target)
{
}

RobotomyRequestForm &RobotomyRequestForm::operator=(RobotomyRequestForm const &op)
{
	(void)op;
	return *this;
}

RobotomyRequestForm::~RobotomyRequestForm()
{
}

void RobotomyRequestForm::execute(Bureaucrat const &executor) const
{
	Form::execute(executor);
	std::cout << "\e[01;33mRobotomy makes some drilling noises\e[0m" << std::endl;
	int randNb = ((rand() % 100 + 1));
	if (randNb % 2 == 0)
		throw Form::ExceptionMsg("Robotomy Failed");
	else
		std::cout << "\e[01;32mTarget <" << _target << "> has been robotomies with success !!\e[0m" << std::endl;
}