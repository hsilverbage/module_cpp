#include "HumanB.hpp"

HumanB::HumanB(std::string name) : _name(name)
{

}

HumanB::~HumanB()
{

}
void	HumanB::setWeapon(Weapon& weapon)
{
	this->_weapon = &weapon;
}


void	HumanB::attack() const
{
	if (this->_weapon->getType() == "")
		std::cout << this->_name << " has no weapon to attack and runs away like a coward" << std::endl;
	else
		std::cout << this->_name << " attacks with their " << this->_weapon->getType() << std::endl;
}
