#ifndef	CHARACTER_HPP
#define	CHARACTER_HPP

#include "ICharacter.hpp"
#include "AMateria.hpp"

class Character : public ICharacter
{
	public:

		Character(const std::string& name);
		~Character();
		Character(const Character &rhs);
		Character&	operator=(const Character &rhs);

		const std::string&	getName() const;
		void				equip(AMateria* m);
		void				unequip(int idx);
		void				use(int idx, ICharacter& target);
		void				delEquip(int idx);
		
	private:
		AMateria*	_items[4];
		std::string	_name;
};

#endif
