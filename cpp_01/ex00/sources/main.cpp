#include <Zombie.hpp>
#include <iostream>

int	main (void)
{
	Zombie	zombie1("bar");
	zombie1.announce();

	Zombie	*zombie2 = newZombie("foo");
	zombie2->announce();

	delete zombie2;

	randomChump("baz");
	return (0);
}
