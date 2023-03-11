/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   newZombie.cpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: lhoukes <lhoukes@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/03/11 16:00:00 by lhoukes       #+#    #+#                 */
/*   Updated: 2023/03/11 16:02:37 by lhoukes       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie *newZombie(std::string name)
{
	Zombie	*new_zombie;
	
	new_zombie = new Zombie(name);
	return(new_zombie);	
}