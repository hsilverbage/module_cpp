#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "Brain.hpp"

int	main (void)
{
	// {
	// 	Dog	basic;
	// 	{
	// 		Dog	temp(basic);


	// 	}
	// }
	{
		const Animal* j = new Dog();
		const Animal* i = new Cat();

		delete j;
		delete i;
	}
	{
		const Animal*	Gang[10];

		for (int i = 0; i < 5; i++)
			Gang[i] = new Dog();
		for (int i = 5; i < 10; i++)
			Gang[i] = new Cat();

		for (int i = 0; i < 10; i++)
			Gang[i]->makeSound();

		for (int i = 0; i < 10; i++)
			delete	Gang[i];
	}
	return (0);
}
