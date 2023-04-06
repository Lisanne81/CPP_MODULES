
#include "include/Animal.hpp"

Animal::Animal(void) : 
	_type("")
{
	std::cout << "Default animal constructor called" << std::endl;
	return ;
}

Animal::Animal(std::string type) : 
	_type(type)
{
	std::cout << "Animal constructor of type: " << type << " called" << std::endl;
	return ;
}

Animal::Animal(const Animal &copy)
{
	std::cout << "Animal copy constructor called" << std::endl;
	*this = copy;
	return ;
}

Animal	&Animal::operator=(const Animal &other)
{
	std::cout << "Animal copy assignment operator called" << std::endl;
	this->_type = other.getType();
	return (*this);
}

Animal::~Animal(void)
{
	std::cout << "Animal deconstructor called" << std::endl;
	return ;
}

std::string	Animal::getType(void) const
{
	return (this->_type);
}

void	Animal::makeSound(void) const
{
	std::cout << "---All the animal sounds...---" << std::endl;
}