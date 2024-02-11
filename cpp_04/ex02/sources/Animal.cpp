#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

Animal::Animal()
{
	std::cout << "Animal default constructor called" << std::endl;
}

Animal::~Animal()
{
	std::cout << "Animal default destructor called" << std::endl;
}

Animal::Animal(const Animal &rhs)
{
	std::cout << "Animal copy construcor called" << std::endl;
	*this = rhs;
}

Animal&	Animal::operator=(const Animal &rhs)
{
	std::cout << "Animal copy assigment operator called" << std::endl;
	if (this != &rhs)
	{
		this->type = rhs.type;
	}
	return (*this);
}

std::string	Animal::getType() const
{
	return (this->type);
}

void	Animal::makeSound()	const
{
	std::cout << "Makes animal sound" << std::endl;
}
