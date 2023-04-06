#ifndef CAT_HPP
# define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal
{
	private:
		Brain*	_catBrain;

	public:
		Cat(void);
		Cat(const Cat& copy);
		Cat& operator=(const Cat& other);
		~Cat(void);

		Brain*	getBrain(void) const;
		void 	makeSound(void) const;
};

# endif