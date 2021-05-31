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
	ZombieEvent flying;
	ZombieEvent runner;
	Zombie *flyingZombies[COUNT];
	Zombie *runnerZombies[COUNT];

	srand((unsigned)time(0));
	flying.setZombieType("flying");
	std::cout << "# Creating " << COUNT << " Flying Zombie" << std::endl;
	for (int i = 0; i < COUNT; i++)
		flyingZombies[i] = flying.randomChump();
	runner.setZombieType("runner");
	std::cout << std::endl << "# Creating " << COUNT << " Runner Zombie" << std::endl;
	for (int i = 0; i < COUNT; i++)
		runnerZombies[i] = runner.randomChump();
	std::cout << std::endl << "# Clean All Flying Zombies" << std::endl;
	for (int i = 0; i < COUNT; i++)
		delete flyingZombies[i];
	std::cout << std::endl << "# Clean All Runner Zombies" << std::endl;
	for (int i = 0; i < COUNT; i++)
		delete runnerZombies[i];
	return (0);
}
