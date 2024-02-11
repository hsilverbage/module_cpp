#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

WrongAnimal::WrongAnimal()
{
	std::cout << "WrongAnimal default constructor called" << std::endl;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal default destructor called" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &rhs)
{
	std::cout << "WrongAnimal copy construcor called" << std::endl;
	*this = rhs;
}

WrongAnimal&	WrongAnimal::operator=(const WrongAnimal &rhs)
{
	std::cout << "WrongAnimal copy assigment operator called" << std::endl;
	if (this != &rhs)
	{
		this->type = rhs.type;
	}
	return (*this);
}

std::string	WrongAnimal::getType() const
{
	return (this->type);
}

void	WrongAnimal::makeSound()	const
{
	std::cout << "Makes a wrong animal sound" << std::endl;
}
