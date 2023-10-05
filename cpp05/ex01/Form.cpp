/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Form.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: lhoukes <lhoukes@student.42.fr>              +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/05 14:12:24 by lhoukes       #+#    #+#                 */
/*   Updated: 2023/10/05 14:27:38 by lhoukes       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form(void) :
_name("-default-"),
_gradeToExecute(Bureaucrat::highestGrade),
_gradeToSign(Bureaucrat::lowestGrade)
{
    std::cout << "Form created." << std::endl;
	return ;
}

Form::Form(const std::string& name, int gradeToSign, int gradeToExecute) :
_name(name),
_gradeToExecute(gradeToExecute),
_gradeToSign(gradeToSign)
{
    return ;
}

Form::Form(const Form &copy)
{
    std::cout << "Form copy constructor is called." << std::endl;
    *this = copy;
    return ;
}
Form &Form::operator=(const Form &other)
{
    
}
Form::~Form(void)
{
    
}
const std::string&  getName() const
{
    
}

bool                getIsSigned() const
{
    
}
    
int                 getGradeToSign() const
{
    
}
    
int                 getGradeToExecute() const
{
    
}

void                beSigned(const Bureaucrat& bureaucrat)
{
    
}