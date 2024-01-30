/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsilverb <hsilverb@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 13:31:23 by hsilverb          #+#    #+#             */
/*   Updated: 2024/01/30 16:45:18 by hsilverb         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name) : _name(name), _weapon(NULL)
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
	if (!this->_weapon || this->_weapon->getType() == "")
		std::cout << this->_name << " has no weapon to attack and runs away like a coward" << std::endl;
	else
		std::cout << this->_name << " attacks with their " << this->_weapon->getType() << std::endl;
}
