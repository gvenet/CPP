/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   superTrap.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gvenet <gvenet@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/15 12:30:03 by gvenet            #+#    #+#             */
/*   Updated: 2021/06/15 12:30:04 by gvenet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SUPER_TRAP_HPP
#define SUPER_TRAP_HPP

#include <iostream>
#include <string>
#include "ctime"
#include "cstdlib"
#include "../inc/clapTrap.hpp"
#include "../inc/fragTrap.hpp"
#include "../inc/scavTrap.hpp"
#include "../inc/ninjaTrap.hpp"

class superTrap : public fragTrap, public ninjaTrap
{
public:
	//=============================================CONSTRUCTORS/DESTRUCTOR================================
	superTrap();
	superTrap(std::string const name);
	superTrap(superTrap const &);
	superTrap& operator=(superTrap const &);
	virtual ~superTrap();

	//==========================PUBLIC MEMBER FONCTION===========================================================


};

#endif
