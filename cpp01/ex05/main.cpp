/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: lhoukes <lhoukes@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/03/24 08:11:53 by lhoukes       #+#    #+#                 */
/*   Updated: 2023/03/24 09:53:28 by lhoukes       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"
#include <iostream>

int	main(void)
{
	Harl harl;

	harl.comments("debug");
	harl.comments("DEBUG");
	harl.comments("INFO");
	harl.comments("WARNING");
	harl.comments("ERROR");
	return (0);
}