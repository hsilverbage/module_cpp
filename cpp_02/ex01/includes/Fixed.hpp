#ifndef	FIXED_HPP
#define FIXED_HPP

#include <iostream>

class	Fixed {

	public :
		Fixed();
		Fixed(int const nb);
		fixed(float const nb);
		~Fixed();


		Fixed	(const Fixed &rhs); // copy constructor
		Fixed&	operator=(const Fixed &rhs); // A copy assignment operator overload.

		int		getRawBits(void) const; //returns the raw value of the fixed-point value
		void	setRawBits(int const raw); //sets the raw value of the fixed-point number.sets the raw value of the fixed-point number.
		float	toFloat(void) const; //returns the fixed-point value as a float
		int		toInt(void) const; //returns the fixed-point value as an integer

	private :

		int					_nb;
		static const int	_nbBits = 8;
};

std::ostream & operator << (std::ostream & o, Fixed const & nb);

/*
Ajoutez à votre classe les constructeurs et les fonctions membres suivants en public :
• Un constructeur prenant un entier constant en paramètre et qui convertit celui-ci en virgule fixe. Le nombre de bits de la partie fractionnaire est initialisé à 8
comme dans l’exercice 00.
• Un constructeur prenant un flottant constant en paramètre et qui convertit
celui-ci en virgule fixe. Le nombre de bits de la partie fractionnaire est initialisé à
8 comme dans l’exercice 00.
• Une fonction membre float toFloat( void ) const;
qui convertit la valeur en virgule fixe en nombre à virgule flottante.
• Une fonction membre int toInt( void ) const;
qui convertit la valeur en virgule fixe en nombre entier.
Ajoutez également la fonction suivante à vos fichiers de la classe Fixed :
• Une surcharge de l’opérateur d’insertion («) qui insère une représentation en virgule flottante du nombre à virgule fixe dans le flux de sortie (objet output stream)
passé en paramètre.
*/

#endif
