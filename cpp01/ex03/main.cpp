/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: lhoukes <lhoukes@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/03/11 14:19:10 by lhoukes       #+#    #+#                 */
/*   Updated: 2023/03/24 11:26:21 by lhoukes       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include "HumanB.hpp"
#include "Weapon.hpp"

int	main(void)
{
	std::string weapons[6] = {R009"GUN", R009"CANDLESTICK", \
		R009"LEAD PIPE", R009"WRENCH", R009"DAGGER", R009"ROPE"};
	
	std::srand(time(0));
	Weapon  club = Weapon(weapons[std::rand() % 6]);
	std::cout << RESET << std::endl;
	HumanA A("Colonel Mustard", club);
	A.attack();
	std::cout << B25"change of weapon!" << RESET << std::endl;
	club.setType(weapons[std::rand() % 6]);
	A.attack();
	std::cout << std::endl;
	HumanA theo("Mrs. White", club);
	theo.attack();
	club.setType(weapons[1]);
	std::cout << B25"change of weapon!" << RESET << std::endl;
	theo.attack();
	
	std::cout << RESET << std::endl;
	
	HumanB B("Miss Scarlet");
	B.setWeapon(club);
	B.attack();
	club.setType(weapons[std::rand() % 6]);
	std::cout << B25"change of weapon!" << RESET << std::endl;
	B.attack();
	std::cout << RESET << std::endl;
	HumanB trudy("Professor Plum");
	trudy.attack();
	std::cout << RESET << std::endl;
	
	system("leaks -q humans");
	return (0);
}
