/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ClapTrap.hpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: lhoukes <lhoukes@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/03/25 16:10:24 by lhoukes       #+#    #+#                 */
/*   Updated: 2023/04/07 13:47:08 by lhoukes       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <iostream>
#include <string>

/* ------------------------- */
/*|			colors			|*/
/* ------------------------- */

# define G40 "\e[38;5;40m"
# define G41 "\e[38;5;41m"
# define G42 "\e[38;5;42m"
# define R009 "\e[38;5;9m"
# define R160 "\e[38;5;160m"
# define R196 "\e[38;5;196m"
# define Y11 "\e[38;5;11m"
# define Y142 "\e[38;5;142m"
# define Y214 "\e[38;5;214m"
# define B18 "\e[38;5;18m"
# define B25 "\e[38;5;25m"
# define B31 "\e[38;5;30m"
# define O209 "\e[38;5;209m"
# define P129 "\e[38;5;129m"
# define P141 "\e[38;5;141m"
# define G66 "\e[38;5;66m"
# define G155 "\e[38;5;155m"	
# define RESET "\e[0m"

/* ------------------------- */
/*|			classes			|*/
/* ------------------------- */

class ClapTrap
{
protected:
	std::string	_name;
	int			_hitPoints;
	int 		_energyPoints;
	int			_attackDamage;

public:
	/*constuctor, copy-constructor, copy-assignmentoperator & deconstuctor*/
	ClapTrap(void);
	ClapTrap(const std::string name);
	ClapTrap(ClapTrap& copy);
	ClapTrap& operator=(const ClapTrap& other);
	~ClapTrap(void);
	
	/*member functions*/
	void attack(const std::string& target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
	
	std::string	getName(void) const;
	int			getHitPoints(void) const;
	int			getEnergyPoints(void) const;
	int			getAttackDamage(void) const;
};

std::ostream& operator<<(std::ostream& output, const ClapTrap& clapTrap);

#endif
