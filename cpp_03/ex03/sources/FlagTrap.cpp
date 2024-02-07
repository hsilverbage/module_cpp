#include "FlagTrap.hpp"

FlagTrap::FlagTrap(std::string name) : ClapTrap(name)
{
	std::cout << "FlagTrap " << this->_name << " default construtor called" << std::endl;
	this->_energyPoints = 100;
	this->_hitPoints= 100;
	this->_attackDamage= 30;
}

FlagTrap::FlagTrap()
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

FlagTrap::FlagTrap(const FlagTrap &rhs)
{
	std::cout << "FlagTrap " << this->_name << " copy constructor called" << std::endl;
	*this = rhs;
}

FlagTrap&	FlagTrap::operator=(const FlagTrap &rhs)
{
	if (this != &rhs)
	{
		this->_name = rhs._name;
		this->_energyPoints = rhs._energyPoints;
		this->_attackDamage = rhs._attackDamage;
		this->_hitPoints = rhs._energyPoints;
	}
	return (*this);
	std::cout << "ScavTrap " << this->_name << " copy assigment operator called" << std::endl;
}

void FlagTrap::highFivesGuys(void)
{
	std::cout << "FlagTrap " << this->_name << " requests a high five" << std::endl;
}
