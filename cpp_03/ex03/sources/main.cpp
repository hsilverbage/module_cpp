#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FlagTrap.hpp"
#include "DiamondTrap.hpp"

int	main (void)
{
	// FlagTrap	Batman("Batman");
	// ClapTrap	Joker("Joker");

	// std::cout << std::endl;
	// Batman.highFivesGuys();
	// std::cout << std::endl;

	// std::cout << Joker;
	// std::cout << Batman;
	// std::cout << std::endl;

	// Batman.attack("Joker");
	// Joker.takeDamage(Batman.getAttackPoints());
	// std::cout << std::endl;

	// std::cout << Joker;
	// std::cout << Batman;
	// std::cout << std::endl;

	// Joker.beRepaired(10);
	// std::cout << Joker;
	// std::cout << std::endl;

	// FlagTrap	SpongeBob("SpongeBob");

	// std::cout << std::endl;
	// SpongeBob.attack("Batman");
	// Batman.takeDamage(SpongeBob.getAttackPoints());
	// std::cout << std::endl;

	// std::cout << Batman;
	// std::cout << SpongeBob;
	// std::cout << std::endl;

	// Batman.beRepaired(10);
	// std::cout << Batman;
	// std::cout << std::endl;

	DiamondTrap	CrackHead("Crackhead");

	CrackHead.whoAmI();
	std::cout << CrackHead;
	CrackHead.highFivesGuys();
	CrackHead.guardGate();
	std::cout << CrackHead;
	CrackHead.attack("Batman");
	std::cout << CrackHead;


	DiamondTrap	Crack("Crack");

	Crack.attack("Crackhead");
	CrackHead.takeDamage(100);

	std::cout << Crack;
	std::cout << CrackHead;

	return (0);
}
