/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   FragTrap.hpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: lhoukes <lhoukes@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/04/04 16:57:55 by lhoukes       #+#    #+#                 */
/*   Updated: 2023/04/10 13:26:28 by lhoukes       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include <iostream>
#include <string>
#include "ClapTrap.hpp"

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

class FragTrap: public ClapTrap
{
	public:
		FragTrap(void);
		FragTrap(const std::string name);
		FragTrap(FragTrap& copy);
		FragTrap& operator=(const FragTrap& other);
		~FragTrap(void);

		void	attack(const std::string& target);
		void	highFiveGuys(void);
};

std::ostream& operator<<(std::ostream& output, const FragTrap& fragTrap);

#endif
