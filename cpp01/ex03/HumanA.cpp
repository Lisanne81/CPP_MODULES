/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   HumanA.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: lhoukes <lhoukes@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/03/11 14:18:24 by lhoukes       #+#    #+#                 */
/*   Updated: 2023/03/24 11:24:20 by lhoukes       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

/* 
This code defines a class HumanA, which has a constructor, a destructor, and a member function attack.

The constructor HumanA::HumanA(std::string name, Weapon& weapon_type) takes two arguments: 
a string name and a reference to a Weapon object weapon_type. 
Inside the constructor, the _name member variable is set to the name argument, 
and the _weapon_at_hand member variable is set to the weapon_type argument. 
The constructor also outputs "Human A is ready to rumble" to the console.

The member function void HumanA::attack(void) const 
prints a message to the console indicating that the HumanA object is attacking with its weapon. 
The message includes the _name member variable and the type of the _weapon_at_hand member variable, 
which is obtained by calling the getType() function of the Weapon class.

Overall, this code defines a class HumanA that represents a human with a weapon, 
where the weapon is passed as a reference to the constructor. 
The attack() function is used to print a message indicating that the human is attacking with their weapon.
*/


HumanA::HumanA(std::string name, Weapon& weapon_type) : _name(name), _weapon_at_hand(weapon_type)
{
	std::cout << O209"Human A is ready to rumble" << RESET << std::endl;
	return ;
}

HumanA::~HumanA(void)
{
	std::cout << "Human A has left the building" << std::endl;
	return ;
}

void	HumanA::attack(void) const 
{

	std::cout << this->_name << G41" attacks with their " << this->_weapon_at_hand.getType() << RESET << std::endl;
	return ;
}