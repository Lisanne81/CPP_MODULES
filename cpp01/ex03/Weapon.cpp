/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Weapon.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: lhoukes <lhoukes@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/03/11 14:18:59 by lhoukes       #+#    #+#                 */
/*   Updated: 2023/03/24 11:24:56 by lhoukes       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string type_option) : _weapon_type(type_option)
{
	std::cout << "preparing a weapon" << std::endl;
	return ;
}

Weapon::~Weapon(void)
{
	std::cout << "destroying a weapon" << std::endl;
	return;
}

/*
	A setType() member function that sets type using the new one passed as parameter.
*/

void Weapon::setType(std::string type)
{
	this->_weapon_type = type;
	return ;
}

/* 
	A getType() member function that returns a const reference to type. 
*/
std::string const &Weapon::getType(void) const
{
	return (this->_weapon_type);
}