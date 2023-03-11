/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   contact.cpp                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: lhoukes <lhoukes@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/02/16 12:19:04 by lhoukes       #+#    #+#                 */
/*   Updated: 2023/03/10 18:41:41 by lhoukes       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include "PhoneBook.hpp"

Contact::Contact (void)
{
	std::cout << "Contact class constructor called" << std::endl;
	return ;
}

Contact::~Contact(void)
{
	std::cout << "Contact class deconstructor called" << std::endl;
	return ;
}

std::string	Contact::get_first_name(void)
{
	return (this->_first_name);
}

std::string	Contact::get_last_name(void)
{
	return (this->_last_name);
}

std::string	Contact::get_nick_name(void)
{
	return (this->_nick_name);
}

std::string	Contact::get_phone_number(void)
{
	return (this->_phone_number);
}

std::string	Contact::get_darkest_secret(void)
{
	return (this->_darkest_secret);
}

void	Contact::put_first_name(std::string first_name)
{
	this->_first_name = first_name;
}
void	Contact::put_last_name(std::string last_name)
{
	this->_last_name = last_name;
}
void	Contact::put_nick_name(std::string nick_name)
{
	this->_nick_name = nick_name;	
}
void	Contact::put_phone_number(std::string phone_number)
{
	this->_phone_number = phone_number;
}
void	Contact::put_darkest_secret(std::string darkest_secret)
{
	this->_darkest_secret = darkest_secret;
}