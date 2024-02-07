#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP

#include "FlagTrap.hpp"
#include "ScavTrap.hpp"
#include "ClapTrap.hpp"

class DiamondTrap : public FlagTrap, public ScavTrap
{
	public :

		DiamondTrap(std::string name);
		~DiamondTrap();
		DiamondTrap(const DiamondTrap &rhs);
		DiamondTrap& operator=(const DiamondTrap &rhs);

		void whoAmI();

	private :

		std::string	_name;
};

#endif
