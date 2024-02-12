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

void	Brain::setIdea(size_t index, std::string idea)
{
	if (index < 100)
	{
		_ideas[index] = idea;
		return ;
	}
	std::cout << "index error" << std::endl;
}

std::string	Brain::getIdea(size_t index) const
{
	if (index < 100)
		return(this->_ideas[index]);
	return (NULL);
}
