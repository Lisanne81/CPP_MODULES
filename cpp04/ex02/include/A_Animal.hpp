#ifndef A_ANIMAL_HPP
#define A_ANIMAL_HPP

#include <string>
#include <iostream>

class A_Animal
{
	private:
	
	protected:
		std::string	_type;
		
	public:
		A_Animal(void);
		A_Animal(std::string type);
		A_Animal(const A_Animal &copy);
		A_Animal& operator=(const A_Animal& other);
		virtual ~A_Animal(void);
		
		std::string		getType(void)const;
		virtual void	makeSound(void)const = 0;
};


#endif