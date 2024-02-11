#include "Cat.hpp"

Cat::Cat()
{
	std::cout << "Cat default constructor called" << std::endl;
	this->Animal::type = "Cat";
	this->_Brain = new	Brain();
}

Cat::~Cat()
{
	std::cout << "Cat default destructor called" << std::endl;
	delete	_Brain;
}

Cat::Cat(const Cat &rhs)
{
	std::cout << "Cat copy constructor called" << std::endl;
	*this = rhs;
	delete this->_brain;
	this->_brain = new Brain(*rhs._brain);
}

Cat&	Cat::operator=(const Cat &rhs)
{
	std::cout << "Cat copy assigment operator called" << std::endl;
	if (this != &rhs)
	{
		this->type = rhs.type;
	}
	return (*this);
}

void	Cat::makeSound() const
{
	std::cout << "MIAAOUU" << std::endl;
}

void	Cat::setIdea(size_t index, std::string idea)
{
	this->_Brain->setIdea(index, idea);
}

std::string	Cat::getIdea(size_t index) const
{
	return (this->_Brain->getIdea(index));
}

void	Cat::showAllIdeas(void) const
{
	for (size_t i = 0; i < 100; i++)
	{
		std::cout << this->_Brain->getIdea(i) << std::endl;
	}
}
