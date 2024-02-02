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
		int				operator < (const Fixed &rhs);
		int				operator > (const Fixed &rhs);
		int				operator >= (const Fixed &rhs);
		int				operator <= (const Fixed &rhs);
		int				operator == (const Fixed &rhs);
		int				operator != (const Fixed &rhs);
		Fixed			&operator = (const Fixed &rhs);
		Fixed			operator + (const Fixed &rhs);
		Fixed			operator - (const Fixed &rhs);
		Fixed			operator * (const Fixed &rhs);
		Fixed			operator / (const Fixed &rhs);
		Fixed			&operator ++ ();
		Fixed			operator ++ (int);
		Fixed			&operator -- ();
		Fixed			operator -- (int);
		int				getRawBits(void) const;
		void			setRawBits(int const raw);
		float			toFloat(void) const;
		int				toInt(void) const;
		static Fixed	min( Fixed &fixed1, Fixed &fixed2);
		static Fixed	min( const Fixed &fixed1, const Fixed &fixed2);
		static Fixed	max( Fixed &fixed1, Fixed &fixed2);
		static Fixed	max( const Fixed &fixed1, const Fixed &fixed2);

	private:
		int					_fixedPoint;
		static const int	_fractionalBits = 8;
};

std::ostream	&operator << (std::ostream &os, const Fixed &rhs);

#endif
