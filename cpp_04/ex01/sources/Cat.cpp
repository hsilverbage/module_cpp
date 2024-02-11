#include "Cat.hpp"

Cat::Cat() : _name("Cat")
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
}

Cat&	Cat::operator=(const Cat &rhs)
{
	std::cout << "Cat copy assigment operator called" << std::endl;
	if (this != &rhs)
	{
		this->_name = rhs._name;
		this->type = rhs.type;
	}
	return (*this);
}

void	Cat::makeSound()	const
{
	std::cout << "MIAAOUU" << std::endl;
}
