#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	std::cout << "ScavTrap " << this->_name << " default constructor called" << std::endl;
	_hitPoints = 100;
	_energyPoints = 50;
	_attackDamage = 20;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap " << this->_name << " default destructor called" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &rhs)
{
	std::cout << "ScavTrap " << this->_name << " copy constructor called" << std::endl;
	*this = rhs;
}

ScavTrap&	ScavTrap::operator=(const ScavTrap &rhs)
{
	std::cout << "ScavTrap" << this->_name << "  assignment copy operator called" << std::endl;
	if (this != &rhs)
	{
		this->_name = rhs._name;
		this->_hitPoints = rhs._hitPoints;
		this->_attackDamage = rhs._attackDamage;
		this->_energyPoints = rhs._energyPoints;
	}
	return (*this);
}

void	ScavTrap::attack(const std::string& target)
{
	if (this->_hitPoints < 1)
		return ;
	if (this->_energyPoints < 1)
	{
		std::cout << "ScavTrap " << this->_name << " has no energy to attack " << target << std::endl;
		return ;
	}
	this->_energyPoints--;
	std::cout << "ScavTrap " << this->_name << " attacks " << target << ", causing " << this->_attackDamage << " points of damage!" << std::endl;
}

void	ScavTrap::guardGate()
{
	std::cout << "ScavTrap " << this->_name << " is now in Gate keeper mode" << std::endl;
}

