/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   megaphone.cpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: lhoukes <lhoukes@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/01/26 16:24:26 by lhoukes       #+#    #+#                 */
/*   Updated: 2023/03/10 15:31:24 by lhoukes       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#define G42 "\e[38;5;42m"
#define B31 "\e[38;5;30m"
# define RESET "\e[0m"

int main(int argc, char **argv)
{
	std::string str;
	int index;
	size_t to_check;
	
	if (argc == 1)
		std::cout << B31"* LOUD AND UNBEARABLE FEEDBACK NOISE *" << RESET << std::endl;
	else
	{
		index = 1;
		while (argv[index])
		{
			to_check = 0;
			str = argv[index];
			while (to_check < str.length())
				std::cout << G42 << (char)std::toupper(str[to_check++]);
			index++;
		}
		std::cout << std::endl;
	}
	return (0);
}
