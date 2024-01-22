#include <Zombie.hpp>

void	randomChump(std::string name)
{
	Zombie	zombie(name);

	zombie.announce();
}

	// It creates a zombie, name it, and the zombie announces itself.
