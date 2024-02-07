#ifndef FLAGTRAP_HPP
#define	FLAGTRAP_HPP

#include "ClapTrap.hpp"

class FlagTrap : virtual public ClapTrap {

	public :

		FlagTrap(std::string name);
		~FlagTrap();

		void highFivesGuys(void);
};

#endif
