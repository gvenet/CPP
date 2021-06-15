/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gvenet <gvenet@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/15 14:39:20 by gvenet            #+#    #+#             */
/*   Updated: 2021/06/15 14:39:20 by gvenet           ###   ########.fr       */
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
	~RobotomyRequestForm();

	void execute(Bureaucrat const &executor) const;
};

#endif
