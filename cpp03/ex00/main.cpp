/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: lhoukes <lhoukes@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/03/25 16:10:39 by lhoukes       #+#    #+#                 */
/*   Updated: 2023/04/07 13:11:16 by lhoukes       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main(void)
{
	ClapTrap claptrap_a;
	ClapTrap claptrap("Gonzo");
	ClapTrap claptrap_b("Rowlf the Dog");
	ClapTrap claptrap_copy(claptrap_a);
	ClapTrap claptrap_c_copy(claptrap);
	
	std::cout << "----------------------------" << std::endl;
	std::cout << claptrap_a;
	std::cout << claptrap;
	std::cout << claptrap_b;
	std::cout << "-----------COPIES-----------" << std::endl;
	std::cout << claptrap_copy;
	std::cout << claptrap_c_copy;
	
	std::cout << "----------------------------" << std::endl;
	claptrap_c_copy.takeDamage(4);
	claptrap_a.takeDamage(6);
	claptrap_copy.beRepaired(20);
	claptrap.takeDamage(1);
	std::cout << "----------------------------" << std::endl;
	claptrap.attack("Fozzie bear");
	claptrap_a.attack("Miss Piggy");
	claptrap_copy.attack("The swedish chef");
	claptrap_c_copy.attack("Scooter");
	std::cout << "----------------------------" << std::endl;
	claptrap.beRepaired(5);
	std::cout << claptrap;
	std::cout << claptrap_c_copy;
	std::cout << "----------------------------" << std::endl;
	claptrap_a.takeDamage(2);
	std::cout << "----------------------------" << std::endl;
	claptrap_b.attack("Fozzie bear");
	claptrap_a.attack("Miss Piggy");
	claptrap_copy.attack("The swedish chef");
	claptrap_c_copy.attack("Scooter");
	std::cout << "----------------------------" << std::endl;

	return (0);
}
