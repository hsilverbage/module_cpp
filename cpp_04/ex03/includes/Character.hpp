#ifndef	CHARACTER_HPP
#define	CHARACTER_HPP

#include "ICharacter.hpp"

class Character : public ICharacter
{
	public:

		Character();
		~Character();
		Character(const Character &rhs);
		Character&	operator=(const Character &rhs);

	private:
		AMateria*	_items[4];
};

#endif
