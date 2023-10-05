/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Form.hpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: lhoukes <lhoukes@student.42.fr>              +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/05 13:52:02 by lhoukes       #+#    #+#                 */
/*   Updated: 2023/10/05 14:24:07 by lhoukes       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP

#include <string>
#include <iostream>
#include <exception>
#include "Bureaucrat.hpp"

/* ------------------------- */
/*|			classes			|*/
/* ------------------------- */

class Form
{
    private:
        std:: string const _name;
        bool               _signed;
        const int          _gradeToExecute;
        const int          _gradeToSign;
    
    public:
    /* Constructors */
    Form(void);
    Form(const std::string& name, int gradeToSign, int gradeToExecute);
    Form(const Form &copy);
    /* Assignment operator overload */
    Form& operator=(const Form &other);
    /* Deconstructor */
    ~Form(void);
    
    /* Member functions */
    const std::string&  getName() const;
    bool                getIsSigned() const;
    int                 getGradeToSign() const;
    int                 getGradeToExecute() const;
    void                beSigned(const Bureaucrat& bureaucrat);

    /* Nested classes */
	class GradeTooHighException : public std::exception 
	{
		public:
			virtual char * what() const throw();
	};
	class GradeTooLowException : public std::exception 
	{
		public:
			virtual char * what() const throw();
	};
        
};

std::ostream& operator<<(std::ostream& os, const Form& form);

#endif