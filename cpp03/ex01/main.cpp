/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: lhoukes <lhoukes@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/03/25 16:10:39 by lhoukes       #+#    #+#                 */
/*   Updated: 2023/04/07 13:46:09 by lhoukes       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int	main(void)
{
	ClapTrap claptrap_a;
	ScavTrap scavtrap_a;
	ScavTrap scavtrap("Fozzie Bear");
	ScavTrap scavtrap_b("Scooter");
	ScavTrap scavtrap_copy(scavtrap_a);
	ScavTrap scavtrap_c_copy(scavtrap);

	std::cout << "-----------ClapTrap info---------" << std::endl;	
	std::cout << claptrap_a;
	std::cout << "-----------ScavTrap info---------" << std::endl;
	std::cout << scavtrap_a;
	std::cout << scavtrap;
	std::cout << scavtrap_b;
	std::cout << "-----------COPIES-----------" << std::endl;
	std::cout << scavtrap_copy;
	std::cout << scavtrap_c_copy;
	
	std::cout << std::endl;
	std::cout << "----------------------------" << std::endl;
	scavtrap_a.takeDamage(6);
	scavtrap_b.takeDamage(10);
	scavtrap_copy.beRepaired(12);
	std::cout << "----------------------------" << std::endl;
	scavtrap.attack("Fozzie Bear");
	scavtrap_a.attack("Kermit");
	scavtrap_copy.attack("The Swedish Chef");
	std::cout << std::endl;
	std::cout << "----------------------------" << std::endl;
	scavtrap_copy.takeDamage(15);
	scavtrap.beRepaired(10);
	scavtrap_a.guardGate();
	scavtrap.getGateKeeperMode();
	scavtrap_a.takeDamage(140);
	scavtrap_a.attack("Gonzo");
	scavtrap.guardGate();
	std::cout << "-----------ScavTrap info---------" << std::endl;
	std::cout << scavtrap_a;
	std::cout << scavtrap;
	std::cout << scavtrap_b;
	std::cout << "-----------COPIES-----------" << std::endl;
	std::cout << scavtrap_copy;
	std::cout << scavtrap_c_copy;

	return (0);
}
