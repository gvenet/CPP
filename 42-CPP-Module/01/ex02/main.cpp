/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncolomer <ncolomer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/14 18:46:00 by ncolomer          #+#    #+#             */
/*   Updated: 2019/12/19 17:55:19 by ncolomer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include "ZombieEvent.hpp"
#include <cstdlib>
#include <ctime>


#define COUNT 5

int main(void)
{
	ZombieEvent walker;
	ZombieEvent runner;
	Zombie *walkerZombies[COUNT];
	Zombie *runnerZombies[COUNT];

	walker.setZombieType("walker");
	std::cout << "# Creating " << COUNT << " Lurker Zombie" << std::endl;
	for (int i = 0; i < COUNT; i++)
		walkerZombies[i] = walker.randomChump();
	runner.setZombieType("runner");
	std::cout << "# Creating " << COUNT << " Sniper Zombie" << std::endl;
	for (int i = 0; i < COUNT; i++)
		runnerZombies[i] = runner.randomChump();
	std::cout << "# Clean All Lurker Zombies" << std::endl;
	for (int i = 0; i < COUNT; i++)
		delete walkerZombies[i];
	std::cout << "# Clean All Sniper Zombies" << std::endl;
	for (int i = 0; i < COUNT; i++)
		delete runnerZombies[i];
	return (0);
}
