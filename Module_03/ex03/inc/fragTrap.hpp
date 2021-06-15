/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gvenet <gvenet@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/15 12:29:07 by gvenet            #+#    #+#             */
/*   Updated: 2021/06/15 12:29:07 by gvenet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAG_TRAP_HPP
#define FRAG_TRAP_HPP

#include <iostream>
#include <string>
#include "ctime"
#include "cstdlib"
#include "../inc/clapTrap.hpp"

class fragTrap : public clapTrap
{
private:
	std::string randAttack(void);
	int setArmorDamageReduction(int ArmDmgRed);

public:
	//=============================================CONSTRUCTORS/DESTRUCTOR================================
	fragTrap();
	fragTrap(std::string const name);
	fragTrap(fragTrap const &);
	fragTrap& operator=(fragTrap const &);
	~fragTrap();

	//==========================PUBLIC MEMBER FONCTION===========================================================
	void armorUpUp(void);
	void vaulthunter_dot_exe(std::string const &target);
};

static int armorDefLimiter = 0;

#endif
