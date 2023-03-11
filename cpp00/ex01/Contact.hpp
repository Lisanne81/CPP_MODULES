/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   contact.hpp                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: lhoukes <lhoukes@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/02/16 12:15:30 by lhoukes       #+#    #+#                 */
/*   Updated: 2023/03/10 14:54:19 by lhoukes       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "color.hpp"

#ifndef CONTACT_HPP
# define CONTACT_HPP

#include <iostream>
#include <string>
#include "color.hpp"

class	Contact
{
	private:
		std::string 	_first_name;
		std::string		_last_name;
		std::string		_nick_name;
		std::string		_phone_number;
		std::string		_darkest_secret;
		
	public:
		Contact(void);
		~Contact(void);
		
		void		put_first_name(std::string first_name);
		void		put_last_name(std::string last_name);
		void		put_nick_name(std::string nick_name);
		void		put_phone_number(std::string phone_number);
		void		put_darkest_secret(std::string darkest_secret);
		std::string	get_first_name(void);
		std::string get_last_name(void);
		std::string get_nick_name(void);
		std::string get_phone_number(void);
		std::string get_darkest_secret(void);
		
		
};

#endif
