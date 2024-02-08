#include "Cat.hpp"

Cat::Cat() : _name("Cat")
{
	std::cout << "Cat default constructor called" << std::endl;
	this->Animal::type = "Cat";
}

Cat::~Cat()
{
	std::cout << "Cat default destructor called" << std::endl;
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
