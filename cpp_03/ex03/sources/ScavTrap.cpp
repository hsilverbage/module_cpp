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

ScavTrap::ScavTrap()
{
	std::cout << "ScavTrap " << this->_name << " default construtor called" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &rhs)
{
	std::cout << "ScavTrap " << this->_name << " copy constructor called" << std::endl;
	*this = rhs;
}

ScavTrap&	ScavTrap::operator=(const ScavTrap &rhs)
{
	std::cout << "ScavTrap " << this->_name << " copy assigment operator called" << std::endl;
	if (this != &rhs)
	{
		this->_attackDamage = rhs._attackDamage;
		this->_hitPoints = rhs._hitPoints;
		this->_energyPoints = rhs._energyPoints;
		this->_name = rhs._name;
	}
	return (*this);
}

void	ScavTrap::guardGate()
{
	std::cout << "ScavTrap " << this->_name << " is now in Gate keeper mode" << std::endl;
}

