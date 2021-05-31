/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncolomer <ncolomer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/14 18:24:33 by ncolomer          #+#    #+#             */
/*   Updated: 2019/12/22 17:59:38 by ncolomer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>
#include <string>
#include <random>

class Zombie
{
private:
	std::string _type;
	std::string _name;

public:
	Zombie(std::string const &_type, std::string const &_name);
	~Zombie();

	static std::string randomName(void);
	void advert(void);
};

#endif