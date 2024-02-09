#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "Brain.hpp"

int	main (void)
{
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

/*
Dans votre fonction main, créez et remplissez un tableau d’objets Animal dont la
moitié est composée d’objets Dog et l’autre moitié d’objets Cat. À la fin de l’exécution
du programme, parcourez ce tableau afin de delete chaque Animal. Vous devez delete
directement les chiens et les chats en tant qu’Animal. Les destructeurs correspondants
doivent être appelés dans le bon ordre.
N’oubliez pas de vérifier que vous n’avez pas de fuites de mémoire.
La copie d’un objet Dog ou d’un objet Cat ne doit pas être superficielle. Par conséquent, vous devez vous assurer que vos copies sont bien des copies profondes.
*/
