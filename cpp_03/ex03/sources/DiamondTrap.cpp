#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name), ScavTrap(name), FlagTrap(name)
{
	this->ClapTrap::_name = name  + "_clap_name";
	this->_name = name;
	this->FlagTrap::_attackDamage = 100;
	this->ScavTrap::_energyPoints = 50;
	this->FlagTrap::_hitPoints = 30;

	std::cout << "DiamondTrap " << this->_name << " default constructor called" << std::endl;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "DiamondTrap " << this->_name << " default destructor called" << std::endl;
}

void	DiamondTrap::whoAmI(void) const
{
	std::cout << "DiamondTrap my name is " << this->_name << " and my ClapTrap name is " << this->ClapTrap::_name <<  std::endl;
}

std::string	DiamondTrap::getName(void) const
{
	return (this->_name);
}

std::ostream&	operator << (std::ostream &os, const DiamondTrap &rhs)
{
	os << rhs.getName() << " has " << rhs.getAttackPoints() << " attack dammage points, " << rhs.getEnergyPoints() << " energy points, " << rhs.getHitPoints() << " HP left\n" << std::endl;
	return (os);
}

