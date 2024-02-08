#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int	main (void)
{
	{
		Dog	Dog1;
		Cat	Cat1;

		Dog1.makeSound();
		Cat1.makeSound();
	}
	{
		WrongCat	Cat2;

		Cat2.makeSound();
	}
	{
		const Animal* meta = new Animal();
		const Animal* j = new Dog();
		const Animal* i = new Cat();

		std::cout << j->getType() << " " << std::endl;
		std::cout << i->getType() << " " << std::endl;

		i->makeSound();
		j->makeSound();
		meta->makeSound();

		delete	meta;
		delete	i;
		delete	j;
	}
	return (0);
}


