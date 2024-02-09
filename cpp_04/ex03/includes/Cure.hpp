#ifndef	CURE_HPP
#define	CURE_HPP

#include <iostream>

class Cure {

	public :

		Cure();
		~Cure();
		Cure(const Cure &rhs);
		Cure&	operator=(const Cure &rhs);

	private :

		std::string	_type;
};


#endif
