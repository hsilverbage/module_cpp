#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FlagTrap.hpp"
#include "DiamondTrap.hpp"

int	main (void)
{
	{
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
	}

	{
		DiamondTrap	test1("test1");
		DiamondTrap	test2(test1);
	}

	return (0);
}
