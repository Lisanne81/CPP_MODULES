/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   PhoneBook.hpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: lhoukes <lhoukes@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/02/16 11:31:14 by lhoukes       #+#    #+#                 */
/*   Updated: 2023/03/10 15:17:53 by lhoukes       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include <iostream>
#include <string>
#include "color.hpp"
#include "Contact.hpp"

class	PhoneBook
{
	private:
		Contact	_contact_list[8];
		int		_total_contacts;
		int		_curr_contact_index;
		
		std::string	contact_input(std::string info, bool phone_number);
		void		create_new_contact(void);
		void		actions(void);
		void		update_rolodex(void);
		void		display_contact_list(void);
		void		display_contact(int index);
		void		display_single_contact(std:: string index);
		int			search_contact(void);
	
	public:
		PhoneBook(void);
		~PhoneBook(void);
		
		std::string	open_phone_book(void);
};

#endif
