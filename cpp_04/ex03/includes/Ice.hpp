#ifndef ICE_HPP
#define	ICE_HPP

#include <iostream>
#include "AMateria.hpp"

class Ice : public AMateria
{
	public:

		Ice();
		~Ice();
		Ice(const Ice &rhs);
		Ice&	operator=(const Ice &rhs);

		virtual void	use(ICharacter& target);

	private:

		std::string	_type;
};




#endif
