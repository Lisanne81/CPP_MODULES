
#include "include/Dog.hpp"

Dog::Dog(void) : Animal("Dog")
{
	std::cout << "Dog constructor called" << std::endl;
	_dogBrain = new Brain();
	return ;
}

Dog::Dog(const Dog& copy)
{
	std::cout << "Dog copy constructor called" << std::endl;
	*this = copy;
	return ;
}

Dog	&Dog::operator=(const Dog &other)
{
	std::cout << "Dog copy assignment operator called" << std::endl;
	this->_type = other.getType();
	this->_dogBrain = new Brain(*other.getBrain());
	return (*this);
}

Dog::~Dog(void)
{
	std::cout << "Dog deconstructor called" << std::endl;
	delete _dogBrain;
	return ;
}

void	Dog::makeSound(void) const
{
	std::cout << "***BARK WOOF BARK WOOF***" << std::endl;
	return ;
}

Brain	*Dog::getBrain(void) const
{
	return (this->_dogBrain);
}