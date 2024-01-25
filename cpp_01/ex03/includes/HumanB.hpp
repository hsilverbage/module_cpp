#ifndef HUMANB_HPP
#define HUMANB_HPP

#include <Weapon.hpp>

class HumanB {

	public :

		HumanB(std::string name);
		~HumanB();

		void	attack() const;
		void	setWeapon(Weapon& weapon);
		Weapon	*weapon;
	private :
		std::string _name;
};

#endif
