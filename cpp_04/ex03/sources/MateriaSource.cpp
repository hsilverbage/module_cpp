#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
	for (int i = 0; i < 4; i++)
		_Materias[i] = NULL;
}

MateriaSource::~MateriaSource()
{
	for (int i = 0; i < 4; i++)
	{
		if (this->_Materias[i])
			delete _Materias[i];
	}
}

MateriaSource::MateriaSource(const MateriaSource &rhs)
{
	*this = rhs;
}

MateriaSource&	MateriaSource::operator=(const MateriaSource &rhs)
{
	if (this != &rhs)
	{
		for (int i = 0; i < 4; i++)
			_Materias[i] = rhs._Materias[i];
	}
	return *this;
}

void	MateriaSource::learnMateria(AMateria* m)
{
	for (int i = 0; i < 4; i++)
	{
		if (_Materias[i] == NULL)
		{
			_Materias[i] = m;
			return;
		}
	}
}

AMateria*		MateriaSource::createMateria(const std::string& type)
{
	for ( int i = 0; i < 4; i++ )
	{
		if (_Materias[i] && _Materias[i]->getType() == type)
			return _Materias[i]->clone();
	}
	return NULL;
}

AMateria*		MateriaSource::getMateria(const std::string &type)
{
	return (*this->_Materias);
}
