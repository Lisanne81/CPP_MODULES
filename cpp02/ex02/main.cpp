/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: lhoukes <lhoukes@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/03/24 14:00:59 by lhoukes       #+#    #+#                 */
/*   Updated: 2023/03/25 16:25:50 by lhoukes       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>

int	main(void)
{
	//subject tests
	std::cout << "SUBJECT:" << std::endl;
	Fixed a;
	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );

	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;
	std::cout << b << std::endl;
	std::cout << Fixed::max( a, b ) << std::endl;

	//extra tests -> created by merel van der wal --mevan-de--
	std::cout << std::endl;
	std::cout << "EXTRA:" << std::endl;

	Fixed	c(3);
	Fixed	d(2);
	Fixed	e(c / d);

	std::cout << "arithmetic:" << std::endl;
	std::cout << "-----------" << std::endl;
	std::cout << "c = " << c << std::endl;
	std::cout << "d = " << d << std::endl;
	std::cout << "e = " << e << std::endl;
	std::cout << "e + a = " << e + a << std::endl;
	std::cout << "c * d = " << c * d << std::endl;
	std::cout << "c - d = " << c - d << std::endl;
	std::cout << "c / d = " << c / d << std::endl;
	std::cout << std::endl;

	std::cout << "comparison:" << std::endl;
	std::cout << "-----------" << std::endl;
	std::cout << "c < d = " << (c < d) << std::endl;
	std::cout << "c > d = " << (c > d) << std::endl;
	std::cout << "c >= d = " << (c >= d) << std::endl;
	std::cout << "c <= d = " << (c <= d) << std::endl;
	std::cout << "c == d = " << (c == d) << std::endl;
	std::cout << "c == c = " << (c == c) << std::endl;
	std::cout << "c != d = " << (c != d) << std::endl;
	std::cout << std::endl;

	std::cout << "increment:" << std::endl;
	std::cout << "-----------" << std::endl;
	std::cout << "e++ = " << e++ << std::endl;
	std::cout << "e-- = " << e-- << std::endl;
	std::cout << "e = " << e << std::endl;
	std::cout << "++e = " << ++e << std::endl;
	std::cout << "--e = " << --e << std::endl;
	std::cout << std::endl;

	std::cout << "min, max:" << std::endl;
	std::cout << "-----------" << std::endl;
	std::cout << "min = " << Fixed::min( c, d ) << std::endl;
	std::cout << "max = " << Fixed::max( c, d ) << std::endl;
	std::cout << "min = " << Fixed::min( e, d ) << std::endl;
	std::cout << "max = " << Fixed::max( e, d ) << std::endl;
	return 0;
}