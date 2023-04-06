#include "include/WrongAnimal.hpp"

WrongAnimal::WrongAnimal(void) : 
	_type("")
{
	std::cout << "Default Wronganimal constructor called" << std::endl;
	return ;
}

WrongAnimal::WrongAnimal(std::string type) : 
	_type(type)
{
	std::cout << "WrongAnimal constructor of type: " << type << " called" << std::endl;
	return ;
}

WrongAnimal::WrongAnimal(const WrongAnimal &copy)
{
	std::cout << "WrongAnimal copy constructor called" << std::endl;
	*this = copy;
	return ;
}

WrongAnimal	&WrongAnimal::operator=(const WrongAnimal &other)
{
	std::cout << "WrongAnimal copy assignment operator called" << std::endl;
	this->_type = other.getType();
	return (*this);
}

WrongAnimal::~WrongAnimal(void)
{
	std::cout << "WrongAnimal deconstructor called" << std::endl;
	return ;
}

std::string	WrongAnimal::getType(void) const
{
	return (this->_type);
}

void	WrongAnimal::makeSound(void) const
{
	std::cout << "---All the WRONG ANIMAL sounds...---" << std::endl;
}