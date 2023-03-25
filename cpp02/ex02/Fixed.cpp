/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Fixed.cpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: lhoukes <lhoukes@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/03/24 14:00:11 by lhoukes       #+#    #+#                 */
/*   Updated: 2023/03/25 15:49:25 by lhoukes       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <cmath>

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

Fixed::Fixed(const int value)
{
	std::cout << R196"Int constructor called" << RESET << std::endl;
	setRawBits(value << this->_bit);
	return ;
}

Fixed::Fixed(const float value)
{
	std::cout << P129"Float constructor called" << RESET << std::endl;
	this->_numberValue = roundf(value * (1 << this->_bit));
	return ;
}

Fixed::Fixed(const Fixed &copy)
{
	std::cout << Y214"-> Copy constructor called" << RESET << std::endl;
	*this = copy;
	return ;
}

Fixed &Fixed::operator=(const Fixed& other)
{
	std::cout << Y142"-> Copy assignment operator called" << RESET << std::endl;
	setRawBits(other.getRawBits());
	return(*this);
}

int	Fixed::getRawBits(void)const
{
	std::cout << B25"getRawBits member function called" << RESET << std::endl;
	return (_numberValue);
}

void	Fixed::setRawBits(int const raw)
{
	this->_numberValue = raw;
}

float	Fixed::toFloat(void) const
{
	float	changeFloat;
	changeFloat = (float) this->_numberValue / (1 << this->_bit);
	return(changeFloat);
}

int		Fixed::toInt(void) const
{
	int	changeInt;
	changeInt = this->_numberValue >> this->_bit;
	return (changeInt);
}

//ex02
// compare:
bool Fixed::operator>(Fixed const &rhs) const
{
	if (this->_numberValue > rhs.getRawBits())
		return (true);
	return false;
}

bool Fixed::operator<(Fixed const &rhs) const
{
	if (this->_numberValue < rhs.getRawBits())
		return (true);
	return false;
}

bool Fixed::operator>=(Fixed const &rhs) const
{
	if (this->_numberValue >= rhs.getRawBits())
		return (true);
	return false;
}

bool Fixed::operator<=(Fixed const &rhs) const
{
	if (this->_numberValue <= rhs.getRawBits())
		return (true);
	return false;
}

bool Fixed::operator==(Fixed const &rhs) const
{
	if (this->_numberValue == rhs.getRawBits())
		return (true);
	return false;
}

bool Fixed::operator!=(Fixed const &rhs) const
{
	if (this->_numberValue != rhs.getRawBits())
		return (true);
	return false;
}


//arithmetic :
Fixed Fixed::operator+(Fixed const &rhs)
{
	return Fixed(this->toFloat() + rhs.toFloat());
}

Fixed Fixed::operator-(Fixed const &rhs)
{
	return Fixed(this->toFloat() - rhs.toFloat());
}

Fixed Fixed::operator*(Fixed const &rhs)
{
	return Fixed(this->toFloat() * rhs.toFloat());
}

Fixed Fixed::operator/(Fixed const &rhs)
{
	return Fixed(this->toFloat() / rhs.toFloat());
}


//increments :
Fixed Fixed::operator++(void)
{
	setRawBits(getRawBits() + 1);
	return *this;
}

Fixed Fixed::operator++(int)
{
	Fixed	copy(*this);
	setRawBits(getRawBits() + 1);
	return copy;
}

Fixed Fixed::operator--(void)
{
	setRawBits(getRawBits() - 1);
	return *this;
}

Fixed Fixed::operator--(int)
{
	Fixed	copy(*this);
	setRawBits(getRawBits() - 1);
	return copy;
}


// min max:
Fixed &Fixed::min(Fixed &a, Fixed &b)
{
	if (a <= b)
		return a;
	return b;
}

Fixed &Fixed::max(Fixed &a, Fixed &b)
{
	if (a >= b)
		return a;
	return b;
}

const Fixed &Fixed::min(const Fixed &a, const Fixed &b)
{
	if (a <= b)
		return a;
	return b;
}

const Fixed &Fixed::max(const Fixed &a, const Fixed &b)
{
	if (a >= b)
		return a;
	return b;
}

std::ostream &operator<<(std::ostream &out, const Fixed &fixed)
{
	out << fixed.toFloat();
	return(out);
}