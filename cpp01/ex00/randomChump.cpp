/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   randomChump.cpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: lhoukes <lhoukes@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/03/11 14:09:02 by lhoukes       #+#    #+#                 */
/*   Updated: 2023/03/24 10:28:04 by lhoukes       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

/*
	The randomChump function takes a std::string argument called name and returns void, 
	meaning it doesn't return any value. Here's what it does:
	Declare a Zombie object called randomZombie and initialize it with the name argument.
	Since the randomZombie object is created on the stack, it will automatically be destroyed when the function exits.
	Return from the function.
	In other words, randomChump creates a new Zombie object with the given name, 
	but doesn't do anything with it beyond its creation. This function might be useful if you just want to 
	quickly create a Zombie object with a certain name, without bothering to store or use the object later.
*/

void randomChump(std::string name) 
{
	Zombie	randomZombie(name);
	return ;
}