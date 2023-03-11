/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   PhoneBook.cpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: lhoukes <lhoukes@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/02/16 12:16:09 by lhoukes       #+#    #+#                 */
/*   Updated: 2023/03/10 18:47:49 by lhoukes       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include "Contact.hpp"
#include <iostream>
#include <iomanip>

PhoneBook::PhoneBook(void)
{
	std::cout << "PhoneBook class constructor called" << std::endl;
	this->_total_contacts = 0;
	this->_curr_contact_index = 0;
	return ;
}

PhoneBook::~PhoneBook(void)
{
	std::cout << "PhoneBook class deconstructor called" << std::endl;
	return ;
}

bool valid_phone_num(std::string input) 
{
	if (input.length() > 15 || input.length() < 3) 
		return false;

	for (unsigned long i = 0; i < input.length(); i++) 
	{
		if (!isdigit(input[i]) && input[i] != '-') 
			return false;
	}

	return (true);
}

bool is_only_space(std::string info_input) 
{
	std::string::const_iterator index;
	for (index = info_input.begin(); index != info_input.end(); ++index) 
	{
		if (*index != ' ') 
		{
			return false;
        }
	}
	return true;
}

bool	is_valid_index(std::string input)
{
	return (input.find_first_not_of("0123456789") == std::string::npos);
}

void	PhoneBook::display_single_contact(std::string index)
{
	std::cout << std::endl << std::left << std::setw(18) << G40"First name\t: " \
		<< RESET << _contact_list[std::stoi(index)].get_first_name() << std::endl;
		std::cout << std::left << std::setw(18) << G40"Last name\t: " \
		<< RESET << _contact_list[std::stoi(index)].get_last_name() << std::endl;
		std::cout << std::left << std::setw(18) << G41"Nickname\t: " \
		<< RESET << _contact_list[std::stoi(index)].get_nick_name() << std::endl;
		std::cout << std::left << std::setw(18) << G42"Phone number\t: " \
		<< RESET << _contact_list[std::stoi(index)].get_phone_number() << std::endl;
		std::cout << std::left << std::setw(18) << G43"Darkest secret\t: " \
		<< RESET << _contact_list[std::stoi(index)].get_darkest_secret() << std::endl << std::endl;
	return ;
}

void	PhoneBook::display_contact(int index)
{
	std::string	first_name;
	std::string	last_name;
	std::string	nick_name;

	first_name = this->_contact_list[index].get_first_name();
	last_name = this->_contact_list[index].get_last_name();
	nick_name = this->_contact_list[index].get_nick_name();

	if (first_name.length() > 10)
		first_name = first_name.substr(0, 9) + ".";
	if (last_name.length() > 10)
		last_name = last_name.substr(0, 9) + ".";
	if (nick_name.length() > 10)
		nick_name = nick_name.substr(0, 9) + ".";	

	std::cout << G40 << std::right << std::setw(10) << index << "|" \
		<< Y150 << std::right << std::setw(10) << first_name << "|" \
		<< R200 << std::right << std::setw(10) << last_name << "|" \
		<< P161 << std::right << std::setw(10) << nick_name << std::endl;
	return ;
}

void	PhoneBook::display_contact_list(void)
{
	if (this->_total_contacts > 0)
	{
		std::cout << B17 << std::right << std::setw(10) << "index" << "|" \
			<< std::right << std::setw(10) << "first name" << "|" \
			<< std::right << std::setw(10) << "last name" << "|" \
			<< std::right << std::setw(10) << "nickname" << RESET << std::endl;
		for (int index = 0; index < this->_total_contacts; index++)
			display_contact(index);
		std::cout << std::endl;
	}
	return ;
}

int	PhoneBook::search_contact(void)
{
	std::string	info_input;
	if (this->_total_contacts == 0)
	{
		std::cout << std::endl;
		std::cout << "Your " << GRN"Phone " << P162"Book " << RESET << "is empty." << std::endl;
		return (0);
	}
	display_contact_list();
	while ("you debate who you gonna call...")
	{
		std::cout << WHT"Enter the " << B18"[index] " << RESET << "of the contact you want to see." << std::endl;
		std::cout << "If you don't want to see a contact type: " << O202"NONE" << RESET << std::endl;
		std::cout << Y11"Your request:\t" << RESET;
		std::getline(std::cin, info_input);
		if (std::cin.eof())
			exit (0);
		if (info_input.empty())
			std::cout << R009"Please select an index for rolodex." << std::endl;
		else if (info_input == "NONE")
			return (0);
		else if (info_input.find('\t') != std::string::npos)
			std::cout << RED << "Tabs are not valid input." << RESET << std::endl;
		else if (!is_valid_index(info_input))
			std::cout << "This is not an index number!" << std::endl;
		else if (std::stoi(info_input) < 0 || std::stoi(info_input) > this->_total_contacts - 1)
			std::cout << RED << "Index out of range. Choose index between [0] - [" << this->_total_contacts - 1 << "]." << RESET << std::endl;
		else
		{
			display_single_contact(info_input);
			return (0);
		}
	}
	return (0);
}

std::string	PhoneBook::contact_input(std::string info, bool phone_number)
{
	std::string	info_input;
	
	while ("you want to share information")
	{
		std::cout << info;
		getline(std::cin, info_input);
		if (std::cin.eof())
			exit (0);
		if (info_input.find('\t') != std::string::npos)
		{
			std::cout << R197"Infomation can not contain a tab." << RESET << std::endl;
		}
		else if (info_input.length() <= 0 || is_only_space(info_input) == true)
		{
			std::cout << R197"Please provide what is asked of you." << RESET << std::endl;
		}
		else if (phone_number == false)
		{
			return (info_input);
		}
		else if (valid_phone_num(info_input))
			return (info_input);
		else
		{
			std::cout << R009"Please add a valid phone-number." << std::endl;
			std::cout << P126"->Use only digits." << std::endl << \
			"->Phone number can contain a '-'." << std::endl \
			<< "->The range is 3 - 15 valid characters." << RESET << std::endl;
		}
	}
	exit (0);
}

void	PhoneBook::update_rolodex(void)
{
	bool	update;
	
	update = false;
	if (this->_total_contacts == 8)
		update = true;
	if (this->_curr_contact_index < 8)
		this->_curr_contact_index++;
	if (update == false)
		this->_total_contacts++;
	if (this->_curr_contact_index == 8)
		this->_curr_contact_index = 0;
	std::cout << std::endl;
	std::cout << G50"Total contacts in this Phone Book: " << RESET << _total_contacts << std::endl;
	return ;
}

void	PhoneBook::create_new_contact()
{
	int		index = this->_curr_contact_index;
	std::cout << WHT"\t ---------------" << RESET << std::endl;
	std::cout << P126"\t[ADD NEW CONTACT]" << std::endl;
	std::cout << WHT"\t ---------------" << RESET << std::endl;
	
	this->_contact_list[index].put_first_name(contact_input("First Name: ", false));
	this->_contact_list[index].put_last_name(contact_input("Last Name: ", false));
	this->_contact_list[index].put_nick_name(contact_input("Nick name: ", false));
	this->_contact_list[index].put_phone_number(contact_input("Phone Number: ", true));
	this->_contact_list[index].put_darkest_secret(contact_input("Darkest Secret: ", false));
	update_rolodex();
	std::cout << O209"Succesfully added a new contact to your " \
		<< GRN"Phone " << P162"Book" << RESET << "!" << std::endl;
	std::cout << std::endl;
	return ;
}

void	PhoneBook::actions(void)
{
	std::cout << "Please enter one of the following commands:" << std::endl << std::endl;
	std::cout << std::left << std::setw(12) << G40"ADD\t:" << P126"[add contact]" << RESET << std::endl;
	std::cout << std::left << std::setw(12) << G40"SEARCH\t:" << Y185"[search contact]" << RESET << std::endl;
	std::cout << std::left << std::setw(12) << G40"EXIT\t:" << B31"[exit program]" << RESET << std::endl << std::endl;
	std::cout << Y11"Your request:\t" << RESET;
		
}

std::string PhoneBook::open_phone_book()
{
	std::string	input;
	
	std::cout << G49"What do you want to do?" << RESET << std::endl;
	
	while ("you are on the phone...")
	{
		actions();
		getline(std::cin, input);
		if (std::cin.eof())
			exit (0);
		if (input == "ADD")
		{
			std::cout << std::endl;
			create_new_contact();
		}
		else if (input == "SEARCH")
		{
			std::cout << std::endl;
			std::cout << GRN"\t\tPhone " << P162"Book " << WHT"Contacts" << RESET << std::endl;
			std::cout << Y11"\t\t-------------------" << RESET << std::endl;
			search_contact();
		}
		else if (input == "EXIT")
		{
			std::cout << std::endl;
			std::cout << O209"Closing the phonebook..." << std::endl;
			std::cout << O208"Contacts are deleted!" << std::endl;
			std::cout << Y142"Goodbye . . . . . . . " << std::endl;
			exit(0);
		}
		else
		{
			std::cout << R009"Input does not match: " << WHT"[ADD], [SEARCH] or [EXIT]" << RESET << std::endl;
			std::cout << std::endl;
		}
	}
	return ("succes");
}
