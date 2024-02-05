#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name) : _name(name), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
	std::cout << "ClapTrap " << this->_name << ": Default constructor called" << std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap " << this->_name << ": Default destructor called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &rhs)
{
	std::cout << "ClapTrap " << this->_name << ": Copy constructor called" << std::endl;
	*this = rhs;
}

ClapTrap&	ClapTrap::operator=(const ClapTrap &rhs)
{
	std::cout << "ClapTrap " << this->_name << ": Copy assignment operator called" << std::endl;
	if (this != &rhs)
	{
		this->_name = rhs._name;
		this->_hitPoints = rhs._hitPoints;
		this->_energyPoints = rhs._energyPoints;
		this->_attackDamage = rhs._attackDamage;
	}
	return (*this);
}

void	ClapTrap::attack(const std::string& target) //When ClapTrack attacks, it causes its target to lose <attack damage> hit points.
{
	if (this->_hitPoints < 1 || this->_energyPoints < 1)
		return ;
	this->_energyPoints--;
	std::cout << "ClapTrap " << this->_name << " attacks " << target << ", causing " << this->_attackDamage << " points of damage!" << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (this->_hitPoints < amount)
	{
		std::cout << "ClapTrap " << this->_name << " lost " << amount << " hit points and died!" << std::endl;
		this->_hitPoints = 0;
		return ;
	}
	this->_hitPoints -= amount;
	std::cout << "ClapTrap " << this->_name << " lost " << amount << " hit points!" << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount) //When ClapTrap repairs itself, it gets <amount> hit points back.
{
	if (this->_energyPoints < 1 || this->_hitPoints < 1)
		return ;
	std::cout << "ClapTrap " << this->_name << " has gained " << amount << " hit points!" << std::endl;
	this->_energyPoints--;
	this->_hitPoints += amount;
}
