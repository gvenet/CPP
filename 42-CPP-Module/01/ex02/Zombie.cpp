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

Zombie::Zombie(std::string const &type, std::string const &name) : _type(type), _name(name)
{
}

Zombie::~Zombie()
{
	std::cout << "<" << this->_name << " (" << this->_type << ")> Died" << std::endl;
}

void Zombie::setCharacteristics(std::string const &type, std::string const &name)
{
	this->_type = type;
	this->_name = name;
}

std::string	Zombie::randomName(void)
{
	int i;
	int randNb;
    std::string word;
    std::ifstream ifs("ZombieNames");

	srand((unsigned)time(0));
	std::this_thread::sleep_for(std::chrono::milliseconds(1000));
	randNb = ((rand() % 100) + 1);
	i = 0;
    while (ifs >> word && i < randNb)
		i++;
	ifs.close();
	return (word);
}

void Zombie::advert(void)
{
	std::cout << "<" << this->_name << " (" << this->_type << ")> ";
	std::cout << "Braiiiiiiinnnssss ..." << std::endl;
}
