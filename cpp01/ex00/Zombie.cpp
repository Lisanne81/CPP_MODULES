/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Zombie.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: lhoukes <lhoukes@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/03/11 14:08:07 by lhoukes       #+#    #+#                 */
/*   Updated: 2023/03/23 08:05:58 by lhoukes       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(void)
{
	std::cout << "Default Zombie 🧟" << G40"constructor called" << RESET << std::endl;
	return ;
}

Zombie::Zombie(std::string name) : _name(name)
{
	this->announce();
	return ;
}

Zombie::~Zombie(void)
{
	std::cout << G42 << this->_name << B25" 🧟 is destroyed!" << RESET << std::endl;
	return ;
}

void	Zombie::announce(void) const
{
	std::cout << G42 << this->_name << Y11": 🧠 BraiiiiiiinnnzzzZ... 🧠" << RESET << std::endl;
	return ;
}