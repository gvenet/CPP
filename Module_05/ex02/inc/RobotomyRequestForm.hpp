/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gvenet <gvenet@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/15 14:38:25 by gvenet            #+#    #+#             */
/*   Updated: 2021/06/15 14:38:26 by gvenet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP
#include <iostream>
#include <string>
#include <exception>
#include <fstream>
#include <random>
#include <ctime>
#include "Form.hpp"

class RobotomyRequestForm : public Form
{
private:	
	std::string const &_target;
	RobotomyRequestForm();

public:
	//============================COPLIAN==========================
	RobotomyRequestForm(std::string const &target);
	RobotomyRequestForm(RobotomyRequestForm const &cpy);
	RobotomyRequestForm &operator=(RobotomyRequestForm const &op);
	virtual ~RobotomyRequestForm();

	void execute(Bureaucrat const &executor) const;
};

#endif
