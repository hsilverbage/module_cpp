#ifndef	MATERIASOURCE_HPP
#define	MATERIASOURCE_HPP

#include "AMateria.hpp"
#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
	public :

		MateriaSource();
		~MateriaSource();
		MateriaSource(const MateriaSource &rhs);
		MateriaSource&	operator=(const MateriaSource &rhs);

		virtual void	learnMateria(AMateria* m);
		AMateria*		createMateria(const std::string& type);
		AMateria*		getMateria(const std::string &type);

	private :

		AMateria*	_Materias[4];
};

#endif
