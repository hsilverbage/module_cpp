#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int	main (void)
{
	ScavTrap	Batman("Batman");
	ClapTrap	Joker("Joker");

	std::cout << std::endl;
	Batman.guardGate();
	std::cout << std::endl;

	std::cout << Joker;
	std::cout << Batman;
	std::cout << std::endl;

	Batman.attack("Joker");
	Joker.takeDamage(Batman.getAttackPoints());
	std::cout << std::endl;

	std::cout << Joker;
	std::cout << Batman;
	std::cout << std::endl;

	Joker.beRepaired(10);
	std::cout << Joker;
	std::cout << std::endl;

	ScavTrap	SpongeBob("SpongeBob");

	std::cout << std::endl;
	SpongeBob.attack("Batman");
	Batman.takeDamage(SpongeBob.getAttackPoints());
	std::cout << std::endl;

	std::cout << Batman;
	std::cout << SpongeBob;
	std::cout << std::endl;

	Batman.beRepaired(10);
	std::cout << Batman;
	std::cout << std::endl;

	return (0);
}
