/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Harl.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: lhoukes <lhoukes@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/03/11 14:24:41 by lhoukes       #+#    #+#                 */
/*   Updated: 2023/03/24 09:52:10 by lhoukes       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl(void)
{
	std::cout << "Hi I'm Harl 👴 and I love to complain!" << std::endl;
	return ;
}

Harl::~Harl(void)
{
	std::cout << "\nPlease leave Harl, Bye!" << std::endl;
	return ;
}


void Harl::debug(void)
{
	std::cout << std::endl;
	std::cout << G42"I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" \
		<< RESET << std::endl;
	return ;
}

void Harl::info(void)
{
	std::cout << std::endl;
	std::cout << Y142"I cannot believe adding extra bacon costs more money!\n" << \
		Y214"You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" \
		<< RESET << std::endl;
	return ;
}

void Harl::warning(void) 
{
	std::cout << std::endl;
	std::cout << O209"I think I deserve to have some extra bacon for free.\n" << \
	"I’ve been coming for years whereas you started working here since last month." << RESET << std::endl;
	return ;
}

void Harl::error(void) 
{
	std::cout << std::endl;
	std::cout << R009"This is unacceptable! I want to speak to the manager now." << RESET << std::endl;
	return ;
}

void Harl::comments(std::string level)
{
	if (level.empty())
	{
		std::cout << B18"No complains?! What is happening to the world Harl...?!" << RESET << std::endl;
		exit (1);
	}
	std::string complain_level[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	void (Harl::*comment[]) () = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
	
	for (int index = 0; index < 4; index++)
	{
		if (complain_level[index] == level)
		{
			(this->*comment[index])();
			return ;
		}
	}
	std::cout << std::endl;
	std::cout << B18"No complains?! What is happening to the world Harl...?!" << RESET << std::endl;
	return ;
}