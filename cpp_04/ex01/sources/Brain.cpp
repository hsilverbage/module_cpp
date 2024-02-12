#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "Brain default constructor called" << std::endl;
}

Brain ::~Brain()
{
	std::cout << "Brain default destructor called" << std::endl;
}

Brain::Brain(const Brain &rhs)
{
	std::cout << "Brain copy constructor called" << std::endl;
	*this = rhs;
}

Brain&	Brain::operator=(const Brain &rhs)
{
	std::cout << "Brain copy assigment operator called" << std::endl;
	if (this != &rhs)
	{
		for (int i = 0; i < 100; i++)
			this->_ideas[i] = rhs._ideas[i];
	}
	return (*this);
}

