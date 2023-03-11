/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Zombie.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: lhoukes <lhoukes@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/03/11 14:07:57 by lhoukes       #+#    #+#                 */
/*   Updated: 2023/03/11 17:36:46 by lhoukes       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

/* ------------------------- */
/*|			Libraries		|*/
/* ------------------------- */

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
# define B18 "\e[38;5;209m"
# define B25 "\e[38;5;25m"
# define B31 "\e[38;5;30m"
# define O209 "\e[38;5;209m"
# define P129 "\e[38;5;129m"
# define P141 "\e[38;5;141m"
# define RESET "\e[0m"

/* ------------------------- */
/*|			classes			|*/
/* ------------------------- */

class Zombie
{
	private:
		std::string const 	_name;
		void				announce(void) const;

	public:
		Zombie(void);
		Zombie(std::string name);
		~Zombie(void);
};

Zombie	*newZombie(std::string name);
void	randomChump(std::string name);

#endif
