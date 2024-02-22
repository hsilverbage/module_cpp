#ifndef	ARRAY_HPP
#define	ARRAY_HPP

#include <iostream>

template <typename T>

class	Array
{
	public :

		Array();
		Array(unsigned int n);
		~Array();
		Array<T>(const Array<T>& rhs);
		Array<T>&	operator=(const Array<T>& rhs);
		T&	operator[](unsigned int i);

		unsigned int	size() const;
		T*				arr;

		class OutOfRangeException : std::exception
		{
			public :
				virtual const char* what() const throw()
				{
					return ("Error : index of the array is out of range");
				}
		};

	private :

		const unsigned int	_size;
};

#include "../sources/Array.tpp"

#endif
