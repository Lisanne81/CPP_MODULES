
#include "include/Brain.hpp"

Brain::Brain(void)
{
	std::cout << "The BRAIN default constructor called" << std::endl;
	return ;
}

Brain::Brain(const Brain& copy)
{
	std::cout << "The BRAIN copy constructor called" << std::endl;
	*this = copy;
	return ;
}

Brain	&Brain::operator=(const Brain& other)
{
	std::cout << "The BRAIN copy assignment operator called" << std::endl;
	
	int	num_of_ideas = this->getNrIdeas();
	
	for (int index = 0; index < num_of_ideas; index++)
		this->_ideas[index] = other.getIdeas(index);
	return (*this);
}

Brain::~Brain(void)
{
	std::cout << "The BRAIN deconstructor called" << std::endl;
	return ;
}

std::string	Brain::getIdeas(int index) const
{
	if (index >= this->getNrIdeas() || index < 0)
		return (NULL);
	return (this->_ideas[index]);
}

int	Brain::getNrIdeas(void) const
{
	return ((int) (sizeof(this->_ideas) / sizeof(std::string)));
}

void	Brain::setIdeas(int index, std::string newIdeas)
{
	if (index >= this->getNrIdeas() || index < 0)
		return ;
	this->_ideas[index] = newIdeas;
}