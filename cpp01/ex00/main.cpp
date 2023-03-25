/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: lhoukes <lhoukes@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/03/11 14:07:29 by lhoukes       #+#    #+#                 */
/*   Updated: 2023/03/24 10:23:35 by lhoukes       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>

/*
	Declare an array of 10 strings called zombies, 
	which contains names for different types of zombies.
	Set the seed for the random number generator using the current time.
	Use a loop to generate 10 random numbers and print them along with a call to 
	the randomChump function, passing in a random element from the zombies array.
	Create five Zombie objects using different constructors, 
	passing in either a string or an element from the zombies array.
	Delete one of the Zombie objects created with newZombie.
	Return 0 to indicate successful completion of the program.
*/


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
	Zombie 		lisanne;
	Zombie		lisanne_1("Lisanne");
	Zombie		new_zombie(zombies[1]);
	Zombie		zombie_stack("Stack zombie");
	Zombie		*zombie_heap = newZombie("Heap zombie");
	
	std::cout << std::endl;

	delete zombie_heap;
	return (0);
}