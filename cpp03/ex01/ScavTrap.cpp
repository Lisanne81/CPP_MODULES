/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ScavTrap.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: lhoukes <lhoukes@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/04/04 11:49:07 by lhoukes       #+#    #+#                 */
/*   Updated: 2023/04/07 13:30:37 by lhoukes       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "ClapTrap.hpp"

ScavTrap::ScavTrap(void) : 
	ClapTrap(), 
	_gateKeeper(false)
{
	this->_hitPoints = 100;
	this->_energyPoints = 50;
	this->_attackDamage = 20;
	std::cout << P129"The ScavTrap " << G66 << "default constructor " 
		<< RESET << "is called for " << G42 << this->_name << std::endl;  
}

ScavTrap::ScavTrap(const std::string name) : 
	ClapTrap(name),
	_gateKeeper(false)
{
	this->_hitPoints = 100;
	this->_energyPoints = 50;
	this->_attackDamage = 20;
	std::cout << P129"The ScavTrap " << G66 << "constructor " 
		<< RESET << "is called for " << G42 << this->_name << std::endl;  
}

ScavTrap::ScavTrap(ScavTrap& copy)
{
	std::cout << P129"The ScavTrap " << Y11 << "copy constructor " 
		<< RESET << "is called for "<< G42 << copy.getName() << std::endl;
	*this = copy;
}

ScavTrap	&ScavTrap::operator=(const ScavTrap &other)
{
	std::cout << P141"ScavTrap Assignment operator called for " << other.getName() << RESET << std::endl;
	if (this != &other)
	{
		this->_attackDamage = other.getAttackDamage();
		this->_name = other._name;
		this->_hitPoints = other._hitPoints;
		this->_energyPoints = other._energyPoints;
		this->_gateKeeper = other.getGateKeeperMode();
	}
	return (*this);
}

ScavTrap::~ScavTrap(void)
{
	std::cout << P129"The ScavTrap " << R009 << "deconstructor " 
		<< RESET << "is called for " << G42 << this->_name << RESET <<std::endl;  
}

void	ScavTrap::guardGate(void)
{
	std::cout << "ScavTrap " << this->_name << " is in " << "Gate Keeper Mode" << std::endl;
	this->_gateKeeper = true;
}

bool	ScavTrap::getGateKeeperMode(void) const
{
	return (this->_gateKeeper); 
}

void	ScavTrap::attack(const std::string& target)
{
	std::cout << R196"⚔️ SCAVTRAP ATTACK ⚔️" << RESET << std::endl;
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
		std::cout << O209"ScavTrap " << G42 << this->_name << R009" ⚔️ attacks ⚔️ " << G66 << target;
		std::cout << RESET", causing " << Y11 << this->_attackDamage << RESET" points of damage. ";
		std::cout << O209"ScavTrap "<< G42 << this->_name << RESET" has "<< Y11 << this->_attackDamage << RESET" energy left.";
		std::cout << std::endl;
	}
}


std::ostream &operator<<(std::ostream &output, const ScavTrap &scavTrap)
{
	output << std::endl;
	output << O209"ScavTrap object info:" << RESET << std::endl;
	output << "ˆˆˆˆˆˆˆˆˆˆˆˆˆˆˆˆˆˆˆˆˆˆˆˆˆˆˆˆˆˆˆˆˆˆˆˆˆˆˆ" << std::endl;
	output << "Name \t\t=\t" << G42 <<scavTrap.getName() << RESET <<std::endl;
	output << "Hit points \t=\t" << Y11 << scavTrap.getHitPoints() << RESET << std::endl;
	output << "Energy Points \t=\t" << Y11 << scavTrap.getEnergyPoints() << RESET << std::endl;
	output << "Attack Damage \t=\t" << Y11 << scavTrap.getAttackDamage() << RESET << std::endl;
	output << "GateKeeperMode\t=\t" << B18 << scavTrap.getGateKeeperMode() << RESET << std::endl;
	output << "ˆˆˆˆˆˆˆˆˆˆˆˆˆˆˆˆˆˆˆˆˆˆˆˆˆˆˆˆˆˆˆˆˆˆˆˆˆˆˆ" << std::endl;
	return (output);
}
