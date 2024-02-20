#include "Serialization.hpp"

Serialization::Serialization()
{

}

Serialization::~Serialization()
{

}

Serialization::Serialization(const Serialization &rhs)
{
	*this = rhs;
}

Serialization&	Serialization::operator=(const Serialization &rhs)
{
	return (*this);
}

uintptr_t	Serialization::serialize(Data* ptr) //It takes a pointer and converts it to the unsigned integer type uintptr_t.
{
	uintptr_t uintptr = reinterpret_cast<uintptr_t>(ptr);
	return (uintptr);
}

Data*		Serialization::deserialize(uintptr_t raw) //It takes an unsigned integer parameter and converts it to a pointer to Data.
{
	Data* dataptr = reinterpret_cast<Data*>(raw);
	return (dataptr);
}
