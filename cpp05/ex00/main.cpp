/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: lhoukes <lhoukes@student.42.fr>              +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/05 11:36:48 by lhoukes       #+#    #+#                 */
/*   Updated: 2023/10/05 13:09:05 by lhoukes       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"


#define RESET	"\e[0m"
#define RED		"\e[31m"

void	createTestBureaucrat(std::string name, int grade)
{
	std::cout << std::endl << "-- Creating bureaucrat named \""
		<< name << "\" with grade " << grade << ":" << std::endl;
	try
	{
		Bureaucrat bureaucrat(name, grade);
		std::cout << bureaucrat << " successfully created." << std::endl;
		return ;
	}
	catch(Bureaucrat::GradeTooHighException & e)
	{
		std::cerr << RED "Exception: " << e.what() << RESET << std::endl;
	}
	catch(Bureaucrat::GradeTooLowException & e)
	{
		std::cerr << RED "Exception: " << e.what() << RESET << std::endl;
	}
}

int	main(void)
{

	std::cout << std::endl << "---- TEST BUREAUCRAT DEFAULT CONSTRUCTOR" << std::endl;
	{
		Bureaucrat	bureaucrat;
		std::cout << "Default bureaucrat is: " << bureaucrat << std::endl;
	}

	std::cout << std::endl << "---- TEST BUREAUCRAT NAME/GRADE CONSTRUCTORS" << std::endl;
	createTestBureaucrat("Peter", 20);
	createTestBureaucrat("Paul", 150);
	createTestBureaucrat("Mary", 1);
	createTestBureaucrat("Bob", 0);
	createTestBureaucrat("Elvis", 151);
	createTestBureaucrat("Joni", -10);

	{
		std::cout << std::endl << "---- TEST BUREAUCRAT ASSIGNMENT OPERATOR" << std::endl; 
		Bureaucrat bureaucrat1("Annie", Bureaucrat::lowestGrade);
		Bureaucrat bureaucrat2("Tracy", 42);

		std::cout << "Two bureaucrats created:\n"
			"\t" << bureaucrat1 << "\n"
			"\t" << bureaucrat2 << std::endl;
		
		bureaucrat1 = bureaucrat2;
		std::cout << "First bureaucrat = second bureaucrat:\n"
			"\t" << bureaucrat1 << "\n"
			"\t" << bureaucrat2 << std::endl;
	}
	{
		std::cout << std::endl << "---- TEST BUREAUCRAT GRADE INCREMENT/DECREMENT" << std::endl;
		Bureaucrat bureaucrat("Kiki", 2);
		std::cout << "Bureaucrat created:\n"
			"\t" << bureaucrat << std::endl;
		try
		{
			std::cout << "Decrementing grade by 1 -> result should be " << bureaucrat.getGrade() + 1 << ":" << std::endl;
			bureaucrat.decrementGrade();
			std::cout << bureaucrat << std::endl;
			std::cout << "Incrementing grade by 1 -> result should be " << bureaucrat.getGrade() - 1 << ":" << std::endl;
			bureaucrat.incrementGrade();
			std::cout << bureaucrat << std::endl;
			std::cout << "Incrementing grade by 1 -> result should be " << bureaucrat.getGrade() - 1 << ":" << std::endl;
			bureaucrat.incrementGrade();
			std::cout << bureaucrat << std::endl;
			std::cout << "Incrementing grade by 1 -> result should be " << bureaucrat.getGrade() - 1 << ":" << std::endl;
			bureaucrat.incrementGrade();
			std::cout << bureaucrat << std::endl;
		}
		catch (Bureaucrat::GradeTooHighException & e)
		{
			std::cout << RED "Exception: " << e.what() << std::endl;
		}
		catch (Bureaucrat::GradeTooLowException & e)
		{
			std::cout << RED "Exception: " << e.what() << std::endl;
		}
	}
	{
		std::cout << std::endl << RED <<"---- TEST BUREAUCRAT GRADE INCREMENT/DECREMENT" << RESET << std::endl;
		Bureaucrat bureaucrat("Bailey", Bureaucrat::lowestGrade);
		std::cout << "Bureaucrat created:\n"
			"\t" << bureaucrat << std::endl;
		try
		{
			std::cout << "Incrementing grade by 50 -> result should be " << bureaucrat.getGrade() - 50 << ":" << std::endl;
			bureaucrat.incrementGrade(50);
			std::cout << bureaucrat << std::endl;
			std::cout << "Incrementing grade by 42 -> result should be " << bureaucrat.getGrade() - 42 << ":" << std::endl;
			bureaucrat.incrementGrade(42);
			std::cout << bureaucrat << std::endl;
			std::cout << "Decrementing grade by 45 -> result should be " << bureaucrat.getGrade() + 45 << ":" << std::endl;
			bureaucrat.decrementGrade(45);
			std::cout << bureaucrat << std::endl;
			std::cout << "Decrementing grade by 100 -> result should be " << bureaucrat.getGrade() + 100 << ":" << std::endl;
			bureaucrat.decrementGrade(100);
			std::cout << bureaucrat << std::endl;
		}
		catch (Bureaucrat::GradeTooHighException & e)
		{
			std::cout << RED "Exception: " << e.what() << std::endl;
		}
		catch (Bureaucrat::GradeTooLowException & e)
		{
			std::cout << RED "Exception: " << e.what() << std::endl;
		}
	}
	return (0);
}