#include "Fixed.hpp"

Fixed::Fixed() : _fixedPoint(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const float value) : _fixedPoint(value * (1 << _fractionalBits))
{
	std::cout << "Float constructor called" << std::endl;
}
Fixed::Fixed(const int value) : _fixedPoint(value << _fractionalBits)
{
	std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &rhs) : _fixedPoint(rhs.getRawBits())
{
	std::cout << "Copy constructor called" << std::endl;
}

Fixed	&Fixed::operator = (const Fixed &rhs)
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &rhs)
		this->_fixedPoint = rhs.getRawBits();
	return (*this);
}

std::ostream	&operator << (std::ostream &os, const Fixed &rhs)
{
	os << rhs.toFloat();
	return (os);
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

void	Fixed::setRawBits(int const raw)
{
	std::cout << "setRawBits member function called" << std::endl;
	this->_fixedPoint = raw;
}

int		Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (this->_fixedPoint);
}

float	Fixed::toFloat(void) const
{
	return ((float)this->_fixedPoint / (1 << this->_fractionalBits));
}

int	Fixed::toInt(void) const
{
	return((this->_fixedPoint >> this->_fractionalBits));
}
