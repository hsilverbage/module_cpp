#include "Character.hpp"

Character::Character(const std::string& name) :_name(name)
{
	for (int i = 0; i < 4; i++)
		this->_items[i] = NULL;
}

Character::~Character()
{
	for (int i = 0; i < 4; i++)
	{
		if (this->_items[i])
			delete this->_items[i];
	}
}

Character::Character(const Character &rhs)
{
	*this = rhs;
}

Character&	Character::operator=(const Character &rhs)
{
	if (this != &rhs)
	{
		this->_name = rhs._name;
		for (int i = 0; i < 4; i++)
			this->_items[i] = rhs._items[i];
	}
	return (*this);
}

const std::string&	Character::getName() const
{
	return (this->_name);
}

void Character::equip(AMateria* m)
{
	for (int i = 0; i < 4; i++)
	{
		if (!this->_items[i])
		{
			this->_items[i] = m;
			return ;
		}
	}
}
void	Character::delEquip(int idx)
{
	delete this->_items[idx];
}

void Character::unequip(int idx)
{
	if (this->_items[idx])
	{
		delEquip(idx);
		this->_items[idx] = NULL;
	}
}

void Character::use(int idx, ICharacter& target)
{
	if (this->_items[idx])
	{
		this->_items[idx]->use(target);
	}
}
