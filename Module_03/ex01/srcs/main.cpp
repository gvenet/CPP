/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gvenet <gvenet@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/15 12:28:05 by gvenet            #+#    #+#             */
/*   Updated: 2021/06/15 12:28:06 by gvenet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/fragTrap.hpp"
#include "../inc/scavTrap.hpp"

int main(void)
{
	std::string ennemy = "ArmorManiac";
	fragTrap frag("Garry");
	scavTrap scav("Banjo");

	std::cout << std::endl
			  << "<|TYPE     \t|LVL\t|NAME\t|EP\t|HP\t|>" << std::endl;
	frag.rangedAttack(ennemy);
	frag.meleeAttack(ennemy);
	frag.takeDamage(20);
	frag.armorUpUp();
	frag.takeDamage(20);
	frag.rangedAttack(ennemy);
	frag.takeDamage(40);
	frag.beRepaired(80);
	frag.vaulthunter_dot_exe(ennemy);
	frag.vaulthunter_dot_exe(ennemy);
	frag.vaulthunter_dot_exe(ennemy);
	frag.vaulthunter_dot_exe(ennemy);
	frag.vaulthunter_dot_exe(ennemy);
	frag.vaulthunter_dot_exe(ennemy);
	frag.takeDamage(130);

	scav.challengeNewComer(ennemy);
	scav.rangedAttack(ennemy);
	scav.takeDamage(30);
	scav.beRepaired(10);
	scav.rangedAttack(ennemy);
	scav.rangedAttack(ennemy);
	scav.takeDamage(100);

	std::cout << std::endl;
	return (0);
}
