/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   newZombie.cpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: lhoukes <lhoukes@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/03/11 16:00:00 by lhoukes       #+#    #+#                 */
/*   Updated: 2023/03/24 10:26:06 by lhoukes       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

/*
	The newZombie function takes a std::string argument called name and returns 
	a pointer to a Zombie object. Here's what it does:
	Declare a pointer to a Zombie object called new_zombie.
	Use the new operator to allocate memory for a new Zombie object, 
	passing in the name argument to the Zombie constructor.
	Assign the memory address of the newly created Zombie object to the new_zombie pointer.
	Return the new_zombie pointer to the calling function.
	In other words, newZombie dynamically creates a new Zombie object on the heap, 
	initializes it with the name argument, and returns a pointer to the newly created object. 
	It's worth noting that the caller of this function is responsible for deleting the Zombie 
	object pointed to by the returned pointer when it's no longer needed, to avoid memory leaks.
*/

Zombie *newZombie(std::string name)
{
	Zombie	*new_zombie;
	
	new_zombie = new Zombie(name);
	return(new_zombie);	
}