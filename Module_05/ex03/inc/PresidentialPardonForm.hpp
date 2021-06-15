/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gvenet <gvenet@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/15 14:39:18 by gvenet            #+#    #+#             */
/*   Updated: 2021/06/15 14:39:19 by gvenet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRSIDENTIALPARDONFORM_HPP
#define PRSIDENTIALPARDONFORM_HPP
#include <iostream>
#include <string>
#include <exception>
#include <fstream>
#include "Form.hpp"

class PresidentialPardonForm : public Form
{
private:	
	std::string const &_target;
	PresidentialPardonForm();
	
public:
	//============================COPLIAN==========================
	PresidentialPardonForm(std::string const &target);
	PresidentialPardonForm(PresidentialPardonForm const &cpy);
	PresidentialPardonForm &operator=(PresidentialPardonForm const &op);
	~PresidentialPardonForm();

	void execute(Bureaucrat const &executor) const;

};

#endif
