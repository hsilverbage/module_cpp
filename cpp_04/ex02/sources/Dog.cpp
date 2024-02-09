#include "Dog.hpp"

Dog::Dog()
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
	std::cout << "Animal copy assigment operator called" << std::endl;
	if (this != &rhs)
	{
		this->type = rhs.type;
	}
	return (*this);
}

void	Dog::makeSound() const
{
	std::cout << "WOUAFF" << std::endl;
}
