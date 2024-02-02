#include "Fixed.hpp"

Fixed::Fixed() : _fixedPoint(0)
{

}

Fixed::Fixed(const float nb) : _fixedPoint(nb * (1 << _fractionalBits))
{

}
Fixed::Fixed(const int nb) : _fixedPoint(nb << _fractionalBits)
{

}

Fixed::Fixed(const Fixed &rhs) : _fixedPoint(rhs.getRawBits())
{

}

bool Fixed::operator != (const Fixed &rhs)
{
	if (this->toFloat() != rhs.toFloat())
		return (true);
	return (false);
}

bool Fixed::operator == (const Fixed &rhs)
{
	if (this->toFloat() == rhs.toFloat())
		return (true);
	return (false);
}

bool Fixed::operator <= (const Fixed &rhs)
{
	if (this->toFloat() <= rhs.toFloat())
		return (true);
	return (false);
}

bool Fixed::operator >= (const Fixed &rhs)
{
	if (this->toFloat() >= rhs.toFloat())
		return (true);
	return (false);
}

bool Fixed::operator > (const Fixed &rhs)
{
	if (this->toFloat() > rhs.toFloat())
		return (true);
	return (false);
}

bool Fixed::operator < (const Fixed &rhs)
{
	if (this->toFloat() < rhs.toFloat())
		return (true);
	return (false);
}

Fixed	&Fixed::operator = (const Fixed &rhs)
{
	if (this != &rhs)
		this->_fixedPoint = rhs.getRawBits();
	return (*this);
}

Fixed	Fixed::operator + (const Fixed &rhs)
{
	return (Fixed(this->toFloat() + rhs.toFloat()));
}

Fixed	Fixed::operator - (const Fixed &rhs)
{
	return (Fixed(this->toFloat() - rhs.toFloat()));
}

Fixed	Fixed::operator * (const Fixed &rhs)
{
	return Fixed(this->toFloat() * rhs.toFloat());
}

Fixed	Fixed::operator / (const Fixed &rhs)
{
	if (rhs.toFloat() != 0)
		return Fixed(this->toFloat() / rhs.toFloat());
	return (Fixed(this->toFloat()));

}

Fixed	&Fixed::operator ++ ()
{
	this->_fixedPoint++;
	return (*this);
}

Fixed	Fixed::operator ++ (int) // not sure about this one
{
	Fixed	tmp = *this;
	++*this;
	return (tmp);
}

Fixed	&Fixed::operator -- ()
{
	this->_fixedPoint--;
	return (*this);
}

Fixed	Fixed::operator--(int)
{
	Fixed	tmp = *this;
	--*this;
	return (tmp);
}

std::ostream	&operator << (std::ostream &os, const Fixed &rhs)
{
	os << rhs.toFloat();
	return (os);
}

Fixed::~Fixed()
{
}

void	Fixed::setRawBits(int const raw)
{
	this->_fixedPoint = raw;
}

int		Fixed::getRawBits(void) const
{
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

Fixed	Fixed::min( const Fixed &fixed1, const Fixed &fixed2)
{
	if (fixed1.toFloat() > fixed2.toFloat())
		return (Fixed(fixed2));
	return (Fixed(fixed1));
}

Fixed	Fixed::min(Fixed &fixed1, Fixed &fixed2)
{
	if (fixed1 > fixed2)
		return (Fixed( fixed2 ));
	return (Fixed(fixed1));
}

Fixed	Fixed::max( const Fixed &fixed1, const Fixed &fixed2)
{
	if (fixed1.toFloat() >= fixed2.toFloat())
		return (Fixed(fixed1));
	return (Fixed(fixed2));
}

Fixed	Fixed::max(Fixed &fixed1, Fixed &fixed2)
{
	if (fixed1 >= fixed2)
		return (Fixed(fixed1));
	return (Fixed(fixed2));
}
