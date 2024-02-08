#include "WrongCat.hpp"

WrongCat::WrongCat() : _name("WrongCat")
{
	std::cout << "WrongCat default constructor called" << std::endl;
	this->WrongAnimal::type = "WrongCat";
}

WrongCat::~WrongCat()
{
	std::cout << "WrongCat default destructor called" << std::endl;
}

WrongCat::WrongCat(const WrongCat &rhs)
{
	std::cout << "WrongCat copy constructor called" << std::endl;
	*this = rhs;
}

WrongCat&	WrongCat::operator=(const WrongCat &rhs)
{
	std::cout << "WrongCat copy assigment operator called" << std::endl;
	if (this != &rhs)
	{
		this->_name = rhs._name;
		this->type = rhs.type;
	}
	return (*this);
}
