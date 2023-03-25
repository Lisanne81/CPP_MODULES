/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: lhoukes <lhoukes@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/03/14 17:21:25 by lhoukes       #+#    #+#                 */
/*   Updated: 2023/03/24 10:31:10 by lhoukes       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>

/*
	Inside the "main" function, it initializes an integer variable "num_of_zom" with the value 13. 
	It then creates a pointer variable "ZombiesPossy" that points to the first element of an array of "Zombie" objects.
	The "ZombieHorde" function is called with "num_of_zom" and a string "All good Zombies" as arguments. 
	This function dynamically allocates an array of "Zombie" objects and initializes each "Zombie" object's name with the given string. 
	The pointer to the first element of the array is returned and assigned to "ZombiesPossy".
	After this, a loop is executed that iterates over the array of "Zombie" objects, calling 
	the "announce" method on each object, which outputs a message to the console about the Zombie object.
	Finally, the program outputs a message to the console indicating that the Zombie horde will be deleted, 
	and it releases the dynamically allocated memory by calling "delete[] ZombiesPossy". 
	The function returns 0, indicating successful execution.
*/

int	main(void)
{
	int		num_of_zom = 13;
	Zombie	*ZombiesPossy = ZombieHorde(num_of_zom, "All good Zombies");
	std::cout << std::endl;
	for (int index = 0; index < num_of_zom; index++)
	{
		ZombiesPossy[index].announce();
	}
	std::cout << "\nResistance will delete the Zombie Horde" << std::endl;
	delete[] ZombiesPossy;
	return (0);
}