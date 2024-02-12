#include "AMateria.hpp"

AMateria::AMateria()
{

}

AMateria::AMateria(const std::string& type) : _type(type)
{

}

AMateria::~AMateria()
{

}

AMateria::AMateria(const AMateria &rhs)
{
	*this = rhs;
}

AMateria&	AMateria::operator=(const AMateria &rhs)
{
	return (*this);
}

AMateria*	AMateria::clone() const
{
	return ((AMateria*)this);
}

void		AMateria::use(ICharacter& target)
{
	std::cout << "AMateria " << this->_type << " used on " << target.getName() << std::endl;
}

const std::string&	AMateria::getType() const
{
	return (this->_type);
}
