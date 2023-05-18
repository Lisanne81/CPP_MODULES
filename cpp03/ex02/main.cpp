/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: lhoukes <lhoukes@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/03/25 16:10:39 by lhoukes       #+#    #+#                 */
/*   Updated: 2023/04/07 13:39:40 by lhoukes       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int	main(void)
{
	ClapTrap clap;
	ScavTrap scav;
	FragTrap frag;
	
	ClapTrap claptrap_a("Miss Piggy");
	ScavTrap scavtrap_a("Fozzie Bear");
	FragTrap fragtrap_a("Gonzo");
	
	ClapTrap copy_clap(clap);
	ScavTrap copy_slap(scav);
	FragTrap copy_flap(frag);
	
	std::cout << "-----------All the Trap's info---------" << std::endl;
	std::cout << clap;
	std::cout << scav;
	std::cout << frag;
	std::cout << claptrap_a;
	std::cout << scavtrap_a;
	std::cout << fragtrap_a;
	std::cout << "-----------COPIES-----------" << std::endl;
	std::cout << copy_clap;
	std::cout << copy_slap;
	std::cout << copy_flap;
	std::cout << "----------------------------" << std::endl;
	claptrap_a.attack("The Swedish Chef");
	clap.attack("Gonzo");
	scavtrap_a.attack("Miss Piggy");
	scav.attack("Kermit");
	fragtrap_a.attack("Fozzie Bear");
	frag.attack("Scooter");
	std::cout << "----------------------------" << std::endl;
	clap.beRepaired(10);
	copy_clap.takeDamage(5);
	copy_slap.takeDamage(30);
	copy_flap.takeDamage(23);
	std::cout << std::endl;
	std::cout << "-----------All the High FIVE's info---------" << std::endl;
	frag.highFiveGuys();
	copy_flap.highFiveGuys();
	fragtrap_a.highFiveGuys();
	std::cout << std::endl;
	std::cout << "-----------All the Trap's info---------" << std::endl;
	std::cout << clap;
	std::cout << scav;
	std::cout << frag;
	std::cout << claptrap_a;
	std::cout << scavtrap_a;
	std::cout << fragtrap_a;
	std::cout << "-----------COPIES-----------" << std::endl;
	std::cout << copy_clap;
	std::cout << copy_slap;
	std::cout << copy_flap;
	std::cout << "----------------------------" << std::endl;
	
	return (0);
}
