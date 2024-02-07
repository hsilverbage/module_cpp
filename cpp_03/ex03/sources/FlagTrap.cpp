#include "FlagTrap.hpp"

FlagTrap::FlagTrap(std::string name) : ClapTrap(name)
{
	std::cout << "FlagTrap " << this->_name << " default construtor called" << std::endl;
	this->_energyPoints = 100;
	this->_hitPoints= 100;
	this->_attackDamage= 30;
}

FlagTrap::~FlagTrap()
{
	std::cout << "FlagTrap " << this->_name << "  default destrcutor called" << std::endl;
}

void FlagTrap::highFivesGuys(void)
{
	std::cout << "FlagTrap " << this->_name << " requests a high five" << std::endl;
}
