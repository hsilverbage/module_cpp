#ifndef	CURE_HPP
#define	CURE_HPP

#include <iostream>
#include "AMateria.hpp"

class Cure : public AMateria
{

	public :

		Cure();
		~Cure();
		Cure(const Cure &rhs);
		Cure&	operator=(const Cure &rhs);

		virtual void		use(ICharacter& target);
		virtual AMateria*	clone() const;
};


#endif
