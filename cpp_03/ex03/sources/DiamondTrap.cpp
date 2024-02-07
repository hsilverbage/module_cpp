#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name), ScavTrap(name), FlagTrap(name)
{
	this->_name = name;
	this->ClapTrap::_name = name + "_clap_name";
	this->_attackDamage = this->FlagTrap::_attackDamage;
	this->_energyPoints = this->ScavTrap::_energyPoints;
	this->_hitPoints = this->FlagTrap::_hitPoints;

	std::cout << "DiamondTrap " << this->_name << " default constructor called" << std::endl;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "DiamondTrap " << this->_name << " default destructor called" << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap &rhs)
{
	*this = rhs;
	std::cout << "DiamondTrap " << this->_name << " copy constructor called" << std::endl;
}

// DiamondTrap&	DiamondTrap::operator=(const DiamondTrap &rhs)
// {
// 	if (*this != rhs)
// 	{
// 		this->_attackDamage = rhs._attackDamage;
// 		this->_energyPoints = rhs._energyPoints;
// 		this->_hitPoints = rhs._hitPoints;
// 		this->ClapTrap::_name = rhs.ClapTrap::_name;
// 		this->_name = rhs._name;
// 	}
// 	return (*this);
// }
