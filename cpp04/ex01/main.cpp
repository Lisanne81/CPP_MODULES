
#include "include/Animal.hpp"
#include "include/Dog.hpp"
#include "include/Cat.hpp"
#include "include/Brain.hpp"

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
	
	//=====================================//
	//======== BASIC TEST FOR LEAKS =======//
	//=====================================//
	std::cout << "======== Constructors =======" << std::endl;
	int			nrAnimals = 6;
	const Animal *posse[nrAnimals];
	for(int i = 0; i < nrAnimals; i++)
	{
		if (i % 2)
			posse[i] = new Dog();
		else
			posse[i] = new Cat();
	}
	std::cout << std::endl;

	std::cout << "========= All the  Cats & Dogs =========" << std::endl;
	for(int i = 0; i < nrAnimals; i++)
		std::cout << posse[i]->getType() << std::endl;
	std::cout << std::endl;
	
	std::cout << "========= Make some noise ========" << std::endl;
	for(int i = 0; i < nrAnimals; i++)
		posse[i]->makeSound();
	std::cout << std::endl;

	std::cout << "======== destruct =======" << std::endl;
	for(int i = 0; i < nrAnimals; i++)
	{
		std::cout << "animal[" << i << "]:" <<std::endl;
		delete posse[i];
		std::cout << std::endl;
	}
	std::cout << std::endl;

	// std::cout << "======= leak check ======" << std::endl;
	// system("leaks -q animal");
	// std::cout << std::endl;

	//=====================================//
	//============= COPY TESTS ============//
	//=====================================//
	std::cout << "====== dog copy test ====" << std::endl;
	const Dog* oneDog = new Dog();
	std::cout << std::endl;

	/*setting a thought to check if the value gets copied*/
	oneDog->getBrain()->setIdeas(0, "Dog wants play!");
	std::cout << "oneDog: idea[0] = " << oneDog->getBrain()->getIdeas(0) << std::endl;
	std::cout << "oneDog: brain address = " << oneDog->getBrain() << std::endl;
	std::cout << std::endl;

	/*copying the oneDog to copyDog*/
	std::cout << "Deep copying the oneDog:" << std::endl;
	const Dog* copyDog = new Dog(*oneDog);
	std::cout << std::endl;
	std::cout << "copyDog: idea[0] = " << copyDog->getBrain()->getIdeas(0) << std::endl;
	std::cout << "copyDog: brain address = " << copyDog->getBrain() << std::endl;
	std::cout << std::endl;
	std::cout << "====== cat copy test ====" << std::endl;
	const Cat* oneCat = new Cat();
	std::cout << std::endl;
	oneCat->getBrain()->setIdeas(0, "Cat wants murder!");
	std::cout	<< "oneCat: idea[0] = "
				<< oneCat->getBrain()->getIdeas(0)
				<< std::endl
				<< "oneCat: brain address = "
				<< oneCat->getBrain()
				<< std::endl << std::endl;
	/*copying the oneCat to copyCat*/
	std::cout << "Deep copying the oneCat:" << std::endl;
	const Cat* copyCat = new Cat(*oneCat);
	std::cout << std::endl;
	std::cout << "copyCat: idea[0] = " << copyCat->getBrain()->getIdeas(0) << std::endl;
	std::cout << "copyCat: brain address = " << copyCat->getBrain() << std::endl;
	std::cout << std::endl;
	
	std::cout << "======== destruction =======" << std::endl;
	delete oneDog;
	delete copyDog;
	delete oneCat;
	delete copyCat;
	std::cout << std::endl;
	
	// std::cout << "======= leak check ======" << std::endl;
	// system("leaks -q brain");
	// std::cout << std::endl;
	return 0;
}