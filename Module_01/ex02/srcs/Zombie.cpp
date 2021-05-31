/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncolomer <ncolomer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/14 18:25:55 by ncolomer          #+#    #+#             */
/*   Updated: 2019/12/19 20:29:48 by ncolomer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>
#include <fstream>
#include <chrono>
#include <thread>

Zombie::Zombie()
{
	this->_name = "";
	this->_type = "";
}

Zombie::Zombie(std::string const &type, std::string const &name) : _type(type), _name(name)
{
}

Zombie::~Zombie()
{
	std::cout << "<" << this->_name << " (" << this->_type << ")> Died" << std::endl;
}

std::string Zombie::randomName(void)
{
	std::string word;
	std::ifstream ifs("ZombieNames");
	int randNb;

	randNb = ((rand() % 100) + 1);
	for(int i = 0; i < randNb; i++) 
		ifs >> word;
	ifs.close();
	return (word);
}

void Zombie::advert(void)
{
	std::cout << "<" << this->_name << " (" << this->_type << ")> ";
	std::cout << "Braiiiiiiinnnssss ..." << std::endl;
}
