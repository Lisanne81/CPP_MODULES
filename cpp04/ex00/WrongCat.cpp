#include "include/WrongCat.hpp"

WrongCat::WrongCat(void) : WrongAnimal("WrongCat")
{
	std::cout << "WrongCat constructor called 🦁" << std::endl;
	return ;
}

WrongCat::WrongCat(const WrongCat& copy)
{
	std::cout << "WrongCat 🦁 copy constructor called 🦁" << std::endl;
	*this = copy;
	return ;
}

WrongCat	&WrongCat::operator=(const WrongCat &other)
{
	std::cout << "WrongCat 🦁 copy assignment operator called 🦁" << std::endl;
	this->_type = other.getType();
	return (*this);
}

WrongCat::~WrongCat(void)
{
	std::cout << "WrongCat deconstructor called 🦁" << std::endl;
	return ;
}

void	WrongCat::makeSound(void) const
{
	std::cout << "🦁***Peep Peep***🦁" << std::endl;
	return ;
}