#include <Zombie.hpp>

int	main (void)
{
	Zombie	*Horde = zombieHorde(10, "GANG");

	for (int i = 0; i < 10; i++)
		Horde[i].announce();

	delete [] Horde;

	return (0);
}
