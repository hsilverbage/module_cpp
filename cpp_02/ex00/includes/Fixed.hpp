#ifndef	FIXED_HPP
#define FIXED_HPP

#include <iostream>

class	Fixed {

	public :
		Fixed();
		~Fixed();

		Fixed&	operator=(const Fixed &rhs); // A copy assignment operator overload.
		Fixed	(const Fixed &rhs); // copy constructor

		int		getRawBits(void) const; //returns the raw value of the fixed-point value
		void	setRawBits(int const raw); //sets the raw value of the fixed-point number.sets the raw value of the fixed-point number.

	private :

		int					_fixedPoint;
		static const int	_fractionalBits = 8;
};

#endif
