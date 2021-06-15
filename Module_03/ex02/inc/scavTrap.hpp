/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   scavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gvenet <gvenet@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/15 12:28:31 by gvenet            #+#    #+#             */
/*   Updated: 2021/06/15 12:28:31 by gvenet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAV_TRAP_HPP
#define SCAV_TRAP_HPP

#include <iostream>
#include <string>
#include "ctime"
#include "cstdlib"
#include "../inc/clapTrap.hpp"

class scavTrap : public clapTrap
{
private: 
	std::string randChallenge(void);

public:
	//=============================================CONSTRUCTORS/DESTRUCTOR================================
	scavTrap();
	scavTrap(std::string const name);
	scavTrap(scavTrap const &);
	scavTrap& operator=(scavTrap const &);
	virtual ~scavTrap();

	//==========================PUBLIC MEMBER FONCTION===========================================================

	void challengeNewComer(std::string const &target);
};

#endif
