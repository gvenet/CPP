/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gvenet <gvenet@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/15 12:27:39 by gvenet            #+#    #+#             */
/*   Updated: 2021/06/15 12:27:40 by gvenet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/FragTrap.hpp"
#include "ctime"
#include "cstdlib"

int main(void)
{
	std::string ennemy = "ArmorManiac";
	fragTrap fragtrap("FR4G-TP");

	std::cout << "<|NAME   \t|LVL\t|EP\t|HP\t|>" << std::endl;
	fragtrap.rangedAttack(ennemy);
	fragtrap.meleeAttack(ennemy);
	fragtrap.takeDamage(20);
	fragtrap.armorUpUp();
	fragtrap.takeDamage(20);
	fragtrap.rangedAttack(ennemy);
	fragtrap.takeDamage(40);
	fragtrap.beRepaired(80);
	fragtrap.vaulthunter_dot_exe(ennemy);
	fragtrap.vaulthunter_dot_exe(ennemy);
	fragtrap.vaulthunter_dot_exe(ennemy);
	fragtrap.vaulthunter_dot_exe(ennemy);
	fragtrap.vaulthunter_dot_exe(ennemy);
	fragtrap.vaulthunter_dot_exe(ennemy);
	fragtrap.takeDamage(130);
	return (0);
}
