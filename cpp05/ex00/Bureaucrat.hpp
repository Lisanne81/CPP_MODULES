/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Bureaucrat.hpp                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: lhoukes <lhoukes@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/04/10 13:02:03 by lhoukes       #+#    #+#                 */
/*   Updated: 2023/05/26 11:02:00 by lhoukes       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <string>
#include <iostream>
#include <exception>

# define HIGHEST_GRADE 1
# define LOWEST_GRADE 150

/* ------------------------- */
/*|			colors			|*/
/* ------------------------- */

# define G40 "\e[38;5;40m"
# define G41 "\e[38;5;41m"
# define G42 "\e[38;5;42m"
# define R009 "\e[38;5;9m"
# define R160 "\e[38;5;160m"
# define R196 "\e[38;5;196m"
# define Y11 "\e[38;5;11m"
# define Y142 "\e[38;5;142m"
# define Y214 "\e[38;5;214m"
# define B18 "\e[38;5;18m"
# define B25 "\e[38;5;25m"
# define B31 "\e[38;5;30m"
# define O209 "\e[38;5;209m"
# define P129 "\e[38;5;129m"
# define P141 "\e[38;5;141m"
# define P199 "\e[38;5;199m"
# define G66 "\e[38;5;66m"
# define G155 "\e[38;5;155m"	
# define RESET "\e[0m"

/* ------------------------- */
/*|			classes			|*/
/* ------------------------- */

class Bureaucrat
{
	private:
		const std::string	_name;
		unsigned int		_grade;
		
	public:
		/* Constructors */
		Bureaucrat(void);
		Bureaucrat(const std::string name, unsigned int grade);
		Bureaucrat(const Bureaucrat &copy);
		/* Assignment operator overload */
		Bureaucrat& operator=(const Bureaucrat& other);
		/* Deconstructor */
		~Bureaucrat(void);
		
		/* Member functions */
		std::string		getName(void) const;
		unsigned int	getGrade(void) const;
		
		/* Nested classes */
		class GradeTooHighException : public std::exception 
		{
			public:
				const char * what() const throw();
		};
		class GradeTooLowException : public std::exception 
		{
			public:
				const char * what() const throw();
		};
};

std::ostream &	operator<<( std::ostream& out, Bureaucrat& other);

#endif
