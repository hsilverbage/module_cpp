#include "Character.hpp"

Character::Character()
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

	}
	return (*this);
}
