/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Fixed.cpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: lhoukes <lhoukes@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/03/24 14:00:11 by lhoukes       #+#    #+#                 */
/*   Updated: 2023/03/25 14:11:25 by lhoukes       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
/*
	These are member functions of a C++ class called "Fixed" 
	that deals with fixed-point numbers, represented as integers 
	with a fixed number of decimal places.
*/

Fixed::Fixed(void) : _numberValue(0)
{
	std::cout << G66"Default constructor called" << RESET << std::endl;
	return ;
}

Fixed::~Fixed(void)
{
	std::cout << G66"Deconstructor called" << RESET << std::endl;
	return ;
}

/* 
	Fixed::Fixed(Fixed &copy): This is the copy constructor of the class, 
	which creates a new instance of the class by copying an existing instance. 
	In this case, it takes a reference to a Fixed object called copy and 
	initializes the new object with the same value. 
	It also prints a message to the console to indicate that the copy constructor 
	has been called.
*/

Fixed::Fixed(Fixed &copy)
{
	std::cout << Y214"-> Copy constructor called" << RESET << std::endl;
	*this = copy;
	return ;
}

/*
	Fixed &Fixed::operator=(const Fixed& other): 
	This is the copy assignment operator of the class, 
	which is called when an existing instance of the class is assigned a new value. 
	It takes a reference to another Fixed object called other and sets 
	the value of the current instance to the same value as other. 
	It also prints a message to the console to indicate that 
	the copy assignment operator has been called.
*/

Fixed &Fixed::operator=(const Fixed& other)
{
	std::cout << Y142"-> Copy assignment operator called" << RESET << std::endl;
	setRawBits(other.getRawBits());
	return(*this);
}

/*
	int Fixed::getRawBits(void) const: 
	This is a getter function that returns the raw integer value of the fixed-point number. 
	It also prints a message to the console to indicate that the function has been called.
*/

int	Fixed::getRawBits(void)const
{
	std::cout << B25"getRawBits member function called" << RESET << std::endl;
	return (_numberValue);
}

/*
	void Fixed::setRawBits(int const raw): 
	This is a setter function that sets 
	the raw integer value of the fixed-point number.
	It takes an integer parameter raw and assigns it to 
	the _numberValue member variable of the class.
*/

void	Fixed::setRawBits(int const raw)
{
	this->_numberValue = raw;
}
