
#include "include/Animal.hpp"
#include "include/Dog.hpp"
#include "include/Cat.hpp"
#include "include/WrongCat.hpp"
#include "include/WrongAnimal.hpp"

#include <iostream>

int main (void)
{
	std::cout << "\t\tThe truth about:"<< std::endl;	
	std::cout << "\t\t==============" << std::endl;
	std::cout << "\t\t||C||A||T||S||" << std::endl;
	std::cout << "\t\t==============" << std::endl;
	std::cout << "\t\t      &       " << std::endl;
	std::cout << "\t\t==============" << std::endl;
	std::cout << "\t\t||D||O||G||S||" << std::endl;
	std::cout << "\t\t==============" << std::endl;

	std::cout << std::endl;
	std::cout << "======== Constructors =======" << std::endl;

	const Animal* meta = new Animal();
	const Animal* dog = new Dog();
	const Animal* cat = new Cat();

	std::cout << std::endl;
	std::cout << "======== Cats & Dogs =======" << std::endl;
	std::cout << " Cat calls: " << cat->getType() << std::endl;
	std::cout << " Dog calls: " << dog->getType() << std::endl;

	std::cout << std::endl;
	std::cout << "========= Make some noise! ========" << std::endl;
	cat->makeSound();
	dog->makeSound();
	meta->makeSound();

	std::cout << std::endl;
	std::cout << "======== No need?! DELETE! =======" << std::endl;
	delete cat;
	delete dog;
	delete meta;

	std::cout << "======== Could this be wrong? =======" << std::endl;
	const WrongAnimal* wrongAnimal = new WrongAnimal();
	const WrongAnimal* wrongCat = new WrongCat();
	std::cout << std::endl;

	std::cout << "wrongCat type = " << wrongCat->getType() << " " << std::endl;
	std::cout << std::endl;

	std::cout << "========= Make some (wrong)noise! ========" << std::endl;
	wrongCat->makeSound(); // will not output cat sound
	wrongAnimal->makeSound();
	std::cout << std::endl;

	std::cout << "======== No need?! DELETE! =======" << std::endl;
	std::cout << "deleting wrongCat:" << std::endl;
	delete wrongCat;
	std::cout << std::endl;
	std::cout << "deleting wrongAnimal:" << std::endl;
	delete wrongAnimal;
	std::cout << std::endl;

	return (0);
}