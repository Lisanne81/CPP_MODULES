/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: lhoukes <lhoukes@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/02/16 14:16:26 by lhoukes       #+#    #+#                 */
/*   Updated: 2023/03/10 17:45:21 by lhoukes       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include "Contact.hpp"

int	main(void)
{		
	PhoneBook	phonebook;
	
	std::cout << std::endl;
	std::cout << O202"Hello! " << WHT"This is the " << Y190"color " << GRN"Phone " << P162"Book" << RESET << std::endl;
	std::cout << R160" __i" << std::endl << 
	R196"|---|" << std::endl << 
	R197"|[_]|" << std::endl << 
	R198"|:::|" << std::endl << 
	R199"|:::|" << std::endl << 
	R200"'\\   \\ " << std::endl << 
	R201"  \\_=_\\" << std::endl;
	std::cout << std::endl; 
	phonebook.open_phone_book();
	std::cout << std::endl;
	std::cout << G50"Contacts are lost forever..." << std::endl;
	std::cout << Y142"Goodbye!" << RESET << std::endl;
	return (0);
}