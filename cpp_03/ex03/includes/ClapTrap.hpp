#ifndef	CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <iostream>

class ClapTrap {

	public :

		ClapTrap(std::string name);
		ClapTrap();
		~ClapTrap();
		ClapTrap(const ClapTrap &rhs);

		ClapTrap&	operator=(const ClapTrap &rhs);

		void	attack(const std::string& target);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);

		unsigned int	getAttackPoints() const;
		unsigned int	getEnergyPoints() const;
		unsigned int	getHitPoints() const;
		std::string		getName() const;

	protected :

		std::string		_name;
		unsigned int	_hitPoints;
		unsigned int	_energyPoints;
		unsigned int	_attackDamage;

};

std::ostream&	operator << (std::ostream &os, const ClapTrap &rhs);

#endif
