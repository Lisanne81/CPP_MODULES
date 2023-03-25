/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: lhoukes <lhoukes@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/03/23 10:04:16 by lhoukes       #+#    #+#                 */
/*   Updated: 2023/03/24 10:18:48 by lhoukes       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#define Y142 "\e[38;5;142m"
#define G42 "\e[38;5;42m"
#define O209 "\e[38;5;209m"
# define RESET "\e[0m"

/* 
	This program creates a string variable str initialized to "HI THIS IS BRAIN". 
	It then creates a pointer strPtr to the string, 
	which is initialized to the memory address of str using the address-of operator &. 
	Finally, it creates a reference strRef to the string, which is initialized to str itself.
	The program then prints the memory addresses of str, strPtr, 
	and strRef using the address-of operator &. It then prints the values of str, 
	*strPtr (the value pointed to by strPtr), and strRef. Note that *strPtr is used 
	to dereference the pointer and obtain the value it points to.
*/

int	main(void)
{
	std::string str = "HI THIS IS BRAIN";
	std::string* strPtr = &str;
	std::string& strRef = str;

	std::cout << G42"Memory address of the string variable: " << Y142 << &str << std::endl;
	std::cout << G42"Memory address held by stringPTR: " << O209 << strPtr << std::endl;
	std::cout << G42"Memory address held by stringREF: " << RESET << &strRef << std::endl;

	std::cout << G42"Value of the string variable: " << Y142 << str << std::endl;
	std::cout << G42"Value pointed to by stringPTR: " << O209 << *strPtr << std::endl;
	std::cout << G42"Value pointed to by stringREF: "<< RESET << strRef << std::endl;
	
	return (0);
}
