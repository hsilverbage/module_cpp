#include "ClapTrap.hpp"

int	main (void)
{
	ClapTrap	Joker("Joker");
	ClapTrap	Batman("Batman");

	Joker.attack("Batman");
	std::cout << Joker;
	Batman.takeDamage(9);
	std::cout << Batman;
	Batman.takeDamage(2);
	std::cout << Batman;
	Batman.beRepaired(10);
	std::cout << Batman;
	Batman.attack("joker");
	Batman.attack("joker");
	std::cout << Batman;
	Joker.beRepaired(12);
	std::cout << Joker;
	Joker.takeDamage(11);
	std::cout << Joker;

	return (0);
}
