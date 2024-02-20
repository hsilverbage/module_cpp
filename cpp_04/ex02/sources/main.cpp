#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "Brain.hpp"

int	main (void)
{
	// {
	// 	const Animal* j = new Dog();
	// 	const Animal* i = new Cat();

	// 	delete j;
	// 	delete i;
	// }
	// {
	// 	const Animal*	Gang[10];

	// 	for (int i = 0; i < 5; i++)
	// 		Gang[i] = new Dog();
	// 	for (int i = 5; i < 10; i++)
	// 		Gang[i] = new Cat();

	// 	for (int i = 0; i < 10; i++)
	// 		Gang[i]->makeSound();

	// 	for (int i = 0; i < 10; i++)
	// 		delete	Gang[i];
	// }
	// {
	// 	Dog	Dog1;
	// 	Cat	Cat1;

	// 	Dog1.makeSound();
	// 	Cat1.makeSound();
	// }
	// {
	// 	Animal	Animal1;

	// 	// Animal1.makeSound();
	// }
	{

		Cat	cat1;
		// Cat	cat2(cat1);

		cat1.showAllIdeas();
		std::cout << std::endl;
		for (int i = 0; i < 25; i++)
			cat1.setIdea(i, "Im hungry");
		for (int i = 25; i < 50; i++)
			cat1.setIdea(i, "Ball Ball Ball");
		for (int i = 50; i < 75; i++)
			cat1.setIdea(i, "I wanna sleep");
		for (int i = 75; i < 100; i++)
			cat1.setIdea(i, "Im gonna lick my balls");
		cat1.showAllIdeas();

		std::cout << std::endl;
	}

	return (0);
}
