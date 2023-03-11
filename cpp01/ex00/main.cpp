/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: lhoukes <lhoukes@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/03/11 14:07:29 by lhoukes       #+#    #+#                 */
/*   Updated: 2023/03/11 16:53:45 by lhoukes       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>

int main (void)
{
	std::string	zombies[10] = {R009"WALKER", R009"GEEKIE", \
		R009"LURKER", R009"EMPTIE", R009"BITER", R009"CREEPIE", \
		R009"ROAMER", R009"DEADHEAD", R009"THE INFECTED", R009"LAME-BRAINIE"};
	std::srand(time(0));

	for (int i = 1; i < 11; i++)
	{
		std::cout << "[" << i << "]\n";
		randomChump(zombies[std::rand() % 10]);
		std::cout << std::endl;
	}
	std::cout << std::endl;
	Zombie		zombie_stack("Stack zombie: ");
	Zombie		*zombie_heap = newZombie("Heap zombie: ");
	std::cout << std::endl;

	delete zombie_heap;
	return (0);
}