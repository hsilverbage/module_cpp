#include "ClapTrap.hpp"

int	main (void)
{
	ClapTrap	Joker("Joker");
	ClapTrap	Batman("Batman");

	Joker.attack("Batman");
	Batman.takeDamage(9);
	Batman.takeDamage(2);
	Batman.beRepaired(10);
	Batman.attack("joker");
	Joker.beRepaired(12);
	Joker.takeDamage(11);

	return (0);
}
