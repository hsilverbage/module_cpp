#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <cmath>

class Fixed
{
	public:
		Fixed();
		Fixed(const int value);
		Fixed(const float value);
		Fixed(const Fixed &rhs);
		~Fixed();
		Fixed	&operator = (const Fixed &rhs);

		int		getRawBits(void) const;
		void	setRawBits(int const raw);
		float	toFloat(void) const;
		int		toInt(void) const;

	private:
		int					_fixedPoint;
		static const int	_fractionalBits = 8;
};

std::ostream	&operator << (std::ostream &os, const Fixed &rhs);

#endif
