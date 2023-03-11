/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Zombie.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: lhoukes <lhoukes@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/03/11 14:08:07 by lhoukes       #+#    #+#                 */
/*   Updated: 2023/03/11 16:35:09 by lhoukes       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string name) : _name(name)
{
	//std::cout << "Zombie 🧟" << G40"constructor called" << RESET << std::endl;
	this->announce();
	return ;
}

Zombie::~Zombie(void)
{
	//std::cout << "Zombie " << R009"deconstructor called" << RESET << std::endl;
	std::cout << G42 << this->_name << B25" 🧟 is destroyed!" << RESET << std::endl;
	return ;
}

void	Zombie::announce(void) const
{
	std::cout << G42 << this->_name << Y11": 🧠 BraiiiiiiinnnzzzZ... 🧠" << RESET << std::endl;
	return ;
}