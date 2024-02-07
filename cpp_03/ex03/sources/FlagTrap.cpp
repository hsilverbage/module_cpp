#include "FlagTrap.hpp"

FlagTrap::FlagTrap(std::string name) : ClapTrap(name)
{
	std::cout << "FlagTrap " << this->_name << " default construtor called" << std::endl;
}

FlagTrap::~FlagTrap()
{
	std::cout << "FlagTrap " << this->_name << "  default destrcutor called" << std::endl;
}

FlagTrap::FlagTrap(const FlagTrap &rhs)
{
	std::cout << "FlagTrap " << this->_name << "  copy constructor called" << std::endl;
	*this = rhs;
}

FlagTrap&	FlagTrap::operator=(const FlagTrap &rhs)
{
	std::cout << "FlagTrap " << this->_name << "  copy aassigment operator called" << std::endl;
	if (this != &rhs)
	{
		this->_name = rhs._name;
		this->_attackDamage = rhs._attackDamage;
		this->_energyPoints = rhs._energyPoints;
		this->_hitPoints = rhs._hitPoints;
	}
	return (*this);
}

void FlagTrap::highFivesGuys(void)
{
	std::cout << "FlagTrap " << this->_name << " requests a high five" << std::endl;
}
