/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: lhoukes <lhoukes@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/03/24 08:11:53 by lhoukes       #+#    #+#                 */
/*   Updated: 2023/03/24 10:14:44 by lhoukes       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"
#include <iostream>

int	main(int argc, char **argv)
{
	Harl harl;

	if (argc == 2)
		harl.comments(argv[1]);
	else
	{
		std::cout << std::endl;
		std::cout << Y11"No valid input to get Harl to complain about something." << std::endl;
		std::cout << G40"Type [DEBUG], [INFO], [WARNING] or [ERROR] to poke HARL 👴" << RESET << std::endl;
	}
	return (0);
}