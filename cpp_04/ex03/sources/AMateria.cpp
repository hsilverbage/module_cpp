#include "AMateria.hpp"

AMateria::AMateria(const std::string& type) : type(type)
{
	std::cout << "AMateria default constructor called" << std::endl;
}

AMateria::~AMateria()
{
	std::cout << "AMateria default destructor called" << std::endl;
}

AMateria::AMateria(const AMateria &rhs)
{
	std::cout << "AMateria default copy constructor called" << std::endl;
	*this = rhs;
}

AMateria&	AMateria::operator=(const AMateria &rhs)
{
	std::cout << "AMateria copy assigment operator called" << std::endl;
	if (this != &rhs)
	{
		this->type = rhs.type;
	}
	return (*this);
}

// const std::string&	getType() const //Returns the materia type
// {
// 	return (this->type);
// }

// virtual AMateria*	clone() const
// {
// 	//blabla
// }

// virtual void		use(ICharacter& target)
// {
// 	//blabla
// }
