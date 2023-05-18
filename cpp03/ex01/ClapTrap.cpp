/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ClapTrap.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: lhoukes <lhoukes@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/03/25 16:10:16 by lhoukes       #+#    #+#                 */
/*   Updated: 2023/04/07 13:30:29 by lhoukes       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void):
_name("Kermit"),
_hitPoints(10),
_energyPoints(10),
_attackDamage(0)
{
	std::cout << O209"The ClapTrap " << G66 << "default constructor " 
		<< RESET << "is called for " << G42 << this->_name << std::endl;  
}

ClapTrap::ClapTrap(const std::string name): 
_name(name),
_hitPoints(10),
_energyPoints(10),
_attackDamage(0)
{
	std::cout << O209"The ClapTrap " << RESET << B18"constructor " 
		<< RESET << "is called for " << G42 << this->_name << RESET << std::endl;  
}

ClapTrap::ClapTrap(ClapTrap &copy)
{
	std::cout << O209"The ClapTrap " << Y11 << "copy constructor " 
		<< RESET << "is called for "<< G42 << copy.getName() << std::endl;
	*this = copy;
}

ClapTrap::~ClapTrap(void)
{
	std::cout << O209"The ClapTrap " << R009 << "deconstructor " 
		<< RESET << "is called for " << G42 << this->_name << RESET <<std::endl;  
}

ClapTrap	&ClapTrap::operator=(const ClapTrap &other)
{
	std::cout << P141"Assignment operator called for " << other.getName() << RESET << std::endl;
	if (this != &other)
	{
		this->_attackDamage = other.getAttackDamage();
		this->_name = other.getName();
		this->_hitPoints = other.getHitPoints();
		this->_energyPoints = other.getEnergyPoints();
		return (*this);
	}
	return (*this);
}

/*Getters*/

std::string	ClapTrap::getName(void) const
{
	return(this->_name);
}

int		ClapTrap::getHitPoints(void) const
{
	return(this->_hitPoints);
}

int		ClapTrap::getEnergyPoints(void) const
{
	return(this->_energyPoints);
}

int		ClapTrap::getAttackDamage(void) const
{
	return(this->_attackDamage);
}

/*Actions*/

void	ClapTrap::attack(const std::string& target)
{
	std::cout << R196"⚔️ ATTACK ⚔️" << RESET << std::endl;
	if (this->_energyPoints <= 0)
	{
		std::cout << "Can not ATTACK! ";
		std::cout << G42 << this->_name << RESET "has" 
			<< R009 << this->_energyPoints << RESET"left😞" << std::endl;
	}
	else if (this->_hitPoints <=0)
	{
		std::cout << "Can not ATTACK! ";
		std::cout << G42 << this->_name << RESET" has " 
			<< R009 << this->_hitPoints << RESET"left😞" << std::endl;
	}
	else
	{
		this->_energyPoints--;
		std::cout << O209"ClapTrap " << G42 << this->_name << R009" ⚔️ attacks ⚔️ " << G66 << target;
		std::cout << RESET", causing " << Y11 << this->_attackDamage << RESET" points of damage. ";
		std::cout << O209"ClapTrap "<< G42 << this->_name << RESET" has "<< Y11 << this->_attackDamage << RESET" energy left.";
		std::cout << std::endl;
	}
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	std::cout << std::endl << G155"⚡REPAIR 🔋" << RESET << std::endl;
	if (this->_energyPoints <= 0)
	{
		std::cout << "Can not repair! ";
		std::cout << G42 << this->_name << RESET"has" 
			<< R009 << this->_energyPoints << RESET"left😞" << std::endl;
	}
	else if (this->_hitPoints <= 0)
	{
		std::cout << "No can do! ";
		std::cout << G42 << this->_name << RESET" has " 
			<< R009 << this->_hitPoints << RESET"left😞" << std::endl;
	}
	else
	{
		this->_hitPoints += amount;
		this->_energyPoints--;
		std::cout << O209"ClapTrap " << G42<< this->_name << RESET" repaired " << Y11 << amount << RESET" health points. ";
		std::cout << Y11 <<this->_hitPoints << RESET" points of health left. ";
		std::cout << Y11 << this->_energyPoints << RESET" energy left.";
		std::cout << std::endl;
	}
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	std::cout << std::endl << P129"💥 TAKE DAMAGE 💥" << std::endl;
	if (this->_hitPoints <= 0)
	{
		std::cout << G42 << this->_name << RESET" has " 
			<< R009 << this->_hitPoints << RESET"left😞" << std::endl;
	}
	else
	{
		this->_hitPoints -= amount;
		std::cout << O209"ClapTrap " << G66 <<this->_name << RESET" took " << Y11 << amount;
		std::cout << RESET" points of damage. " << Y11 << this->_hitPoints << RESET" left.";
		std::cout << std::endl;
	}
}

std::ostream &operator<<(std::ostream &output, const ClapTrap& clapTrap)
{
	output << std::endl;
	output << O209"ClapTrap object info:" << RESET << std::endl;
	output << "ˆˆˆˆˆˆˆˆˆˆˆˆˆˆˆˆˆˆˆˆˆˆˆˆˆˆˆˆˆˆˆˆˆˆˆˆˆˆˆ" << std::endl;
	output << "Name \t\t=\t" << G42 <<clapTrap.getName() << RESET <<std::endl;
	output << "Hit points \t=\t" << Y11 << clapTrap.getHitPoints() << RESET << std::endl;
	output << "Energy Points \t=\t" << Y11 << clapTrap.getEnergyPoints() << RESET << std::endl;
	output << "Attack Damage \t=\t" << Y11 << clapTrap.getAttackDamage() << RESET << std::endl;
	output << "ˆˆˆˆˆˆˆˆˆˆˆˆˆˆˆˆˆˆˆˆˆˆˆˆˆˆˆˆˆˆˆˆˆˆˆˆˆˆˆ" << std::endl;
	return (output);
}
