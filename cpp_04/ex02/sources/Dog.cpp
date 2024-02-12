#include "Dog.hpp"

Dog::Dog() : _name("Dog")
{
	std::cout << "Dog default constructor called" <<std::endl;
	this->Animal::type = "Dog";
	this->_Brain = new	Brain();
}
Dog::~Dog()
{
	std::cout << "Dog default destructor called" << std::endl;
	delete _Brain;
}

Dog::Dog(const Dog &rhs)
{
	std::cout << "Dog copy assigment called" <<std::endl;
	*this = rhs;
}

Dog&	Dog::operator=(const Dog &rhs)
{
	std::cout << "Dog copy assigment operator called" << std::endl;
	if (this != &rhs)
	{
		this->type = rhs.type;
		this->_name = rhs._name;
		this->_Brain = new Brain(*rhs._Brain);
	}
	return (*this);
}

void	Dog::makeSound()	const
{
	std::cout << "WOUUAAFF" << std::endl;
}

void	Dog::setIdea(size_t index, std::string idea)
{
	this->_Brain->setIdea(index, idea);
}

std::string	Dog::getIdea(size_t index) const
{
	return (this->_Brain->getIdea(index));
}

void	Dog::showAllIdeas(void) const
{
	for (size_t i = 0; i < 100; i++)
	{
		std::cout << this->_Brain->getIdea(i) << std::endl;
	}
}
