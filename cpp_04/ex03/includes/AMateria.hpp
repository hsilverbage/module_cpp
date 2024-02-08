#ifndef	AMATERIA_HPP
#define	AMATERIA_HPP

#include <iostream>

class AMateria
{
	public :

		AMateria(std::string const & type);
		virtual ~AMateria();
		AMateria(const AMateria &rhs);
		AMateria&	 operator=(const AMateria &rhs);

		const std::string&	getType() const; //Returns the materia type
		// virtual AMateria*	clone() const = 0;
		// virtual void		use(ICharacter& target);

	protected :

		std::string	type;
};

#endif
