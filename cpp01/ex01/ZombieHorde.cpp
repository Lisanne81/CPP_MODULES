/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ZombieHorde.cpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: lhoukes <lhoukes@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/03/11 14:13:12 by lhoukes       #+#    #+#                 */
/*   Updated: 2023/03/24 10:33:20 by lhoukes       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

/*
	This is a function called ZombieHorde that takes two arguments: an integer N and a std::string called name.
	The function dynamically allocates an array of N Zombie objects using the new operator, 
	and sets the name of each Zombie object in the array to the value of the name argument using a for loop.
	If the N argument is less than 1 or the name argument is empty, an error message is printed to the console, 
	and the program exits using the exit() function with a status code of 1.
	Finally, the function returns a pointer to the first element of the Zombie array.
	Therefore, this function is used to create a horde of zombies, where each zombie in the horde has the same name.
*/

Zombie	*ZombieHorde(int N, std::string name)
{
	if (N < 1)
	{
		std::cout << Y11"A Zombie Horde must have at least one 🧟‍♀️" << std::endl;
		exit(1);
	}
	else if (name.empty())
	{
		std::cout << Y11"A Zombie Horde must have 🧟‍♀️ name" << std::endl;
		exit(1);
	}
	
	Zombie	*theZombieHorde = new Zombie[N];
	
	for (int index = 0; index < N; index++)
	{
		theZombieHorde[index].set_name(name);
	}
	
	return(theZombieHorde);
}