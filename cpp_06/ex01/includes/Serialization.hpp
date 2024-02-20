#ifndef	SERIALIZATION_HPP
#define	SERIALIZATION_HPP

#include <iostream>
#include <cstdint>
#include "Data.hpp"

class	Serialization
{
	public :

		static uintptr_t	serialize(Data* ptr); //It takes a pointer and converts it to the unsigned integer type uintptr_t.
		static Data*		deserialize(uintptr_t raw); //It takes an unsigned integer parameter and converts it to a pointer to Data.

	private :

		Serialization();
		~Serialization();
		Serialization(const Serialization &rhs);
		Serialization&	operator=(const Serialization &rhs);

};

#endif
