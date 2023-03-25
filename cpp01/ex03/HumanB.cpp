/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   HumanB.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: lhoukes <lhoukes@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/03/11 14:18:45 by lhoukes       #+#    #+#                 */
/*   Updated: 2023/03/24 11:19:07 by lhoukes       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"
#include "Weapon.hpp"

HumanB::HumanB(std::string name) : _name(name), _weapon_at_hand(NULL)
{
	std::cout << P129"Human B is ready to rumble" << RESET << std::endl;
	return ;
}

HumanB::~HumanB(void)
{
	std::cout << "Human B has left the building" << std::endl;
	return ;
}

void	HumanB::setWeapon(Weapon &weapon)
{
	this->_weapon_at_hand = &weapon;
}

Weapon *HumanB::getWeapon()
{
	return(this->_weapon_at_hand);
}

void	HumanB::attack(void)
{
	if (this->_weapon_at_hand)
		std::cout << this->_name << G40" attacks with their " << RESET << getWeapon()->getType() << std::endl;
	else
		std::cout << this->_name << Y142" can't attack without a weapon " << RESET << std::endl;
	return ;
}