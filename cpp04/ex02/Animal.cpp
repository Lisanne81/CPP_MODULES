
#include "include/A_Animal.hpp"

A_Animal::A_Animal(void) : 
	_type("")
{
	std::cout << "Default A_animal constructor called" << std::endl;
	return ;
}

A_Animal::A_Animal(std::string type) : 
	_type(type)
{
	std::cout << "A_Animal constructor of type: " << type << " called" << std::endl;
	return ;
}

A_Animal::A_Animal(const A_Animal &copy)
{
	std::cout << "A_Animal copy constructor called" << std::endl;
	*this = copy;
	return ;
}

A_Animal	&A_Animal::operator=(const A_Animal &other)
{
	std::cout << "A_Animal copy assignment operator called" << std::endl;
	this->_type = other.getType();
	return (*this);
}

A_Animal::~A_Animal(void)
{
	std::cout << "A_Animal deconstructor called" << std::endl;
	return ;
}

std::string	A_Animal::getType(void) const
{
	return (this->_type);
}

void	A_Animal::makeSound(void) const
{
	std::cout << "---All the A_animal sounds...---" << std::endl;
}