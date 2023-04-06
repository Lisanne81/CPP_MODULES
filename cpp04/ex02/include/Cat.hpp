#ifndef CAT_HPP
# define CAT_HPP

#include "A_Animal.hpp"
#include "Brain.hpp"

class Cat : public A_Animal
{
	private:
		Brain*	_catBrain;

	public:
		Cat(void);
		Cat(const Cat& copy);
		Cat& operator=(const Cat& other);
		virtual ~Cat(void);

		Brain*	getBrain(void) const;
		void 	makeSound(void) const;
};

# endif