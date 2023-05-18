/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   FragTrap.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: lhoukes <lhoukes@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/04/04 16:58:16 by lhoukes       #+#    #+#                 */
/*   Updated: 2023/04/07 13:38:30 by lhoukes       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ClapTrap.hpp"

FragTrap::FragTrap(void) : 
	ClapTrap() 
{
	this->_hitPoints = 100;
	this->_energyPoints = 100;
	this->_attackDamage = 30;
	std::cout << Y214"The FragTrap " << G66 << "default constructor " 
		<< RESET << "is called for " << G42 << this->_name << std::endl;  
}

FragTrap::FragTrap(const std::string name) : 
	ClapTrap(name)
{
	this->_hitPoints = 100;
	this->_energyPoints = 100;
	this->_attackDamage = 30;
	std::cout << Y214"The FragTrap " << G66 << "constructor " 
		<< RESET << "is called for " << G42 << this->_name << std::endl;  
}

FragTrap::FragTrap(FragTrap& copy)
{
	std::cout << Y214"The FragTrap " << Y11 << "copy constructor " 
		<< RESET << "is called for "<< G42 << copy.getName() << std::endl;
	*this = copy;
}

FragTrap	&FragTrap::operator=(const FragTrap &other)
{
	std::cout << P141"FragTrap Assignment operator called for " << other.getName() << RESET << std::endl;
	if (this != &other)
	{
		this->_attackDamage = other.getAttackDamage();
		this->_name = other.getName();
		this->_hitPoints = other.getHitPoints();
		this->_energyPoints = other.getEnergyPoints();
		return(*this);
	}
	return (*this);
}

FragTrap::~FragTrap(void)
{
	std::cout << Y214"The FragTrap " << R009 << "deconstructor " 
		<< RESET << "is called for " << G42 << this->_name << RESET <<std::endl;  
}

void	FragTrap::attack(const std::string& target)
{
	std::cout << R196"⚔️ FragTrap ATTACK ⚔️" << RESET << std::endl;
	if (_energyPoints <= 0)
	{
		std::cout << "Can not ATTACK! ";
		std::cout << G42 << this->_name << RESET " has " 
			<< R009 << this->_energyPoints << RESET" energy points left😞" << std::endl;
	}
	else if (this->_hitPoints <=0)
	{
		std::cout << "Can not ATTACK! ";
		std::cout << G42 << this->_name << RESET" has " 
			<< R009 << this->_hitPoints << RESET" hitpoints left😞" << std::endl;
	}
	else
	{
		this->_energyPoints--;
		std::cout << Y214"FragTrap " << G42 << this->_name << R009" ⚔️ attacks ⚔️ " << G66 << target;
		std::cout << RESET", causing " << Y11 << this->_attackDamage << RESET" points of damage. ";
		std::cout << O209"FragTrap "<< G42 << this->_name << RESET" has "<< Y11 << this->_attackDamage << RESET" energy left.";
		std::cout << std::endl;
	}
}

void	FragTrap::highFiveGuys(void)
{
	std::cout << Y214"FragTrap " << G42 <<this->getName() << RESET <<" gives a High ✋!" << std::endl;
}

std::ostream &operator<<(std::ostream &output, const FragTrap &FragTrap)
{
	output << std::endl;
	output << Y214"FragTrap object info:" << RESET << std::endl;
	output << "ˆˆˆˆˆˆˆˆˆˆˆˆˆˆˆˆˆˆˆˆˆˆˆˆˆˆˆˆˆˆˆˆˆˆˆˆˆˆˆ" << std::endl;
	output << "Name \t\t=\t" << G42 <<FragTrap.getName() << RESET <<std::endl;
	output << "Hit points \t=\t" << Y11 << FragTrap.getHitPoints() << RESET << std::endl;
	output << "Energy Points \t=\t" << Y11 << FragTrap.getEnergyPoints() << RESET << std::endl;
	output << "Attack Damage \t=\t" << Y11 << FragTrap.getAttackDamage() << RESET << std::endl;
	output << "ˆˆˆˆˆˆˆˆˆˆˆˆˆˆˆˆˆˆˆˆˆˆˆˆˆˆˆˆˆˆˆˆˆˆˆˆˆˆˆ" << std::endl;
	return (output);
}
