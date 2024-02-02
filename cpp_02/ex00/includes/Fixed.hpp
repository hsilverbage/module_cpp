#ifndef	FIXED_HPP
#define FIXED_HPP

#include <iostream>

class	Fixed {

	public :

		Fixed();
		Fixed(const Fixed &rhs);
		~Fixed();

		Fixed&	operator=(const Fixed &rhs);

		int		getRawBits(void) const;
		void	setRawBits(int const raw);

	private :

		int					_fixedPoint;
		static const int	_fractionalBits = 8;
};

#endif
