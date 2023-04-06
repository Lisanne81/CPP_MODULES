
#include "include/Dog.hpp"

Dog::Dog(void) : Animal("Dog")
{
	std::cout << "Dog constructor called 🐶" << std::endl;
	return ;
}

Dog::Dog(const Dog& copy)
{
	std::cout << "Dog 🐶 copy constructor called 🐶" << std::endl;
	*this = copy;
	return ;
}

Dog	&Dog::operator=(const Dog &other)
{
	std::cout << "Dog copy 🐶 assignment operator called 🐶" << std::endl;
	this->_type = other.getType();
	return (*this);
}

Dog::~Dog(void)
{
	std::cout << "Dog deconstructor called 🐶" << std::endl;
	return ;
}

void	Dog::makeSound(void) const
{
	std::cout << "🐶***BARK WOOF BARK WOOF***🐶" << std::endl;
	return ;
}