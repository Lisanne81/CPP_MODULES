
#include "include/Cat.hpp"

Cat::Cat(void) : Animal("Cat")
{
	std::cout << "Cat constructor called 😺" << std::endl;
	return ;
}

Cat::Cat(const Cat& copy)
{
	std::cout << "Cat 😺 copy constructor called 😺" << std::endl;
	*this = copy;
	return ;
}

Cat	&Cat::operator=(const Cat &other)
{
	std::cout << "Cat 😺 copy assignment operator called 😺" << std::endl;
	this->_type = other.getType();
	return (*this);
}

Cat::~Cat(void)
{
	std::cout << "Cat deconstructor called 😺" << std::endl;
	return ;
}

void	Cat::makeSound(void) const
{
	std::cout << "😼***PURRR MEEEOOOUUUWWWW PURRR***😼" << std::endl;
	return ;
}