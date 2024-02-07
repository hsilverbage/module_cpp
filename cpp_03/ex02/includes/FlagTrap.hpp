#ifndef FLAGTRAP_HPP
#define	FLAGTRAP_HPP

#include "ClapTrap.hpp"

class FlagTrap : public ClapTrap {

	public :

		FlagTrap(std::string name);
		~FlagTrap();
		FlagTrap(const FlagTrap &rhs);
		FlagTrap&	operator=(const FlagTrap &rhs);

		void highFivesGuys(void);
};

#endif
