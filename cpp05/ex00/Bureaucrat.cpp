/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Bureaucrat.cpp                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: lhoukes <lhoukes@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/05/14 12:08:11 by lhoukes       #+#    #+#                 */
/*   Updated: 2023/05/26 11:24:01 by lhoukes       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include <iostream>

Bureaucrat::Bureaucrat(void) :
	_name("-default-"),
	_grade(0)
{
	std::cout << "Bureaucrat at work." << std::endl;
	return ;
}

Bureaucrat::Bureaucrat(const std::string name, unsigned int grade) :
	_name(name),
	_grade(grade) 
{
	std::cout << Y142 << *this << RESET << std::endl;
	// std::cout << "Bureaucrat working on form: " << name << " and has grade: " \
	// 	<< grade << std::endl;
	return ;
}

Bureaucrat::Bureaucrat(const Bureaucrat &copy)
{
	std::cout << "Bureaucrat's copy constructor is called." << std::endl;
	*this = copy;
	return ;
}

Bureaucrat	&Bureaucrat::operator=(const Bureaucrat &other)
{
	std::cout << "Bureaucrat " << P141"copy assignment operator " << RESET << "called" << std::endl;
	if (this != &other)
	{
		this->_name = other.getName();
		this->_grade = other.getName();
		return (*this);
	}
	return (*this);
}

Bureaucrat::~Bureaucrat(void)
{
	std::cout << "Bureaucrat " << R009"deconstructor called" << RESET << std::endl;
	return ;
}

std::string	Bureaucrat::getName(void) const
{
	return (this->_name);
}

unsigned int	Bureaucrat::getGrade(void) const
{
	return (this->_grade);
}


Bureaucrat::GradeTooHighException(int grade)
{
	if (grade <= 0)
	{
		std::cout << "Grade is to low!" << std::endl;
		return (0);
	}
	else 
		return (this->_grade);
}

Bureaucrat::GradeTooLowException(int grade)
{
	if (grade > 150)
	{
		std::cout << "Grade is to low!" << std::endl;
		return (0);
	}
	else 
		return (this->_grade);
	
}