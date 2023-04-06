#ifndef DOG_HPP
#define DOG_HPP

#include "A_Animal.hpp"
#include "Brain.hpp"

class Dog : public A_Animal
{
	private:
		Brain*	_dogBrain;
	
	public:
		Dog(void);
		Dog(const Dog& copy);
		Dog& operator=(const Dog& other);
		virtual ~Dog(void);

		Brain*	getBrain(void) const;
		void	makeSound(void) const;
};

#endif