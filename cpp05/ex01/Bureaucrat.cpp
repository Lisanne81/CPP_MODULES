/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Bureaucrat.cpp                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: lhoukes <lhoukes@student.42.fr>              +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/05/14 12:08:11 by lhoukes       #+#    #+#                 */
/*   Updated: 2023/10/05 13:49:36 by lhoukes       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

/* credits test file from mcombeau*/

#include "Bureaucrat.hpp"
#include <iostream>

Bureaucrat::Bureaucrat(void) :
	_name("-default-"),
	_grade(Bureaucrat::lowestGrade)
{
	std::cout << "Bureaucrat at work." << std::endl;
	return ;
}

Bureaucrat::Bureaucrat(const std::string name, unsigned int grade) :
	_name(name),
	_grade(grade) 
{
	std::cout << Y142 << *this << RESET << std::endl;
	std::cout << "Bureaucrat working on form: " << name << " and has grade: " \
		<< grade << std::endl;
	if (grade < Bureaucrat::highestGrade)
		throw(Bureaucrat::GradeTooHighException());
	else if (grade > Bureaucrat::lowestGrade)
		throw(Bureaucrat::GradeTooLowException());
	else
		this->_grade = grade;
	return ;
	
	// return ;
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
		this->_grade = other.getGrade();
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

// Definition of GradeTooHighException
const char* Bureaucrat::GradeTooHighException::what() const throw() {
    return "Grade is too high!";
}

// Definition of GradeTooLowException
const char* Bureaucrat::GradeTooLowException::what() const throw() {
    return "Grade is too low!";
}

// Definition of incrementGrade() member function
void Bureaucrat::incrementGrade() {
    if (_grade - 1 < 1)
        throw GradeTooHighException();
    else
        _grade--;
}

// Definition of decrementGrade() member function
void Bureaucrat::decrementGrade() {
    if (_grade + 1 > 150)
        throw GradeTooLowException();
    else
        _grade++;
}

void	Bureaucrat::incrementGrade(int i)
{
	if (this->_grade - i < Bureaucrat::highestGrade)
		return (throw(Bureaucrat::GradeTooHighException()));
	else 
	{
		std::cout << G155 << *this << " was promoted to grade "
			<< this->_grade - i << "!"
			RESET << std::endl;
		this->_grade -= i;
	}
	return ;
}

void	Bureaucrat::decrementGrade(int i)
{
	if (this->_grade + i > Bureaucrat::lowestGrade)
		return (throw(Bureaucrat::GradeTooLowException()));
	else
	{
		std::cout << Y11 << *this << " was demoted to grade "
			<< this->_grade + i << "!"
			RESET << std::endl;
		this->_grade += i;
	}
	return ;
}


std::ostream& operator<<(std::ostream& os, const Bureaucrat& bureaucrat)
{
	os << bureaucrat.getName() << ", bureaucrat grade " << bureaucrat.getGrade();
    return os;
}
