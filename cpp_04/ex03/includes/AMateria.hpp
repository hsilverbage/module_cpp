#ifndef	AMATERIA_HPP
#define	AMATERIA_HPP

#include <iostream>
#include "ICharacter.hpp"

class ICharacter;

class AMateria
{
	public :

		AMateria();
		AMateria(const std::string& type);
		AMateria(const AMateria &rhs);
		virtual ~AMateria();

		AMateria&	 operator=(const AMateria &rhs);

		virtual AMateria*	clone() const = 0;
		virtual void		use(ICharacter& target);
		const std::string&	getType() const;

	protected :

		std::string	_type;
};

#endif
