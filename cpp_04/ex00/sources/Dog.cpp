#include "Dog.hpp"

Dog::Dog() : _name("Dog")
{
	std::cout << "Dog default constructor called" <<std::endl;
	this->Animal::type = "Dog";
}
Dog::~Dog()
{
	std::cout << "Dog default destructor called" << std::endl;
}

Dog::Dog(const Dog &rhs)
{
	std::cout << "Dog copy assigment called" <<std::endl;
	*this = rhs;
}

Dog&	Dog::operator=(const Dog &rhs)
{
	std::cout << "Animal copy assigment operator called" << std::endl;
	if (this != &rhs)
	{
		this->type = rhs.type;
		this->Animal::type = rhs.getType();
	}
	return (*this);
}
