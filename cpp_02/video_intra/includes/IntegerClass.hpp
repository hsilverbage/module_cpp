#ifndef INTEGERCLASS_HPP
# define INTEGERCLASS_HPP

#include <iostream>

class Integer
{
	public:
		Integer(int const nb);
		~Integer();

		int	getValue(void) const;

		Integer &	operator=(Integer const & rhs);
		Integer		operator+(Integer const & rhs) const;

	private:

		int	_nb;
};

std::ostream & operator << (std::ostream & o, Integer const & rhs);

#endif
