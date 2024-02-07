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

		void	whoAmI(void) const;

		std::string	getName() const;

	private :

		std::string	_name;
};

std::ostream&	operator << (std::ostream &os, const DiamondTrap &rhs);

#endif
