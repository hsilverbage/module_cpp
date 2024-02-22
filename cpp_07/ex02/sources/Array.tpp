#include "Array.hpp"

template <typename T>

Array<T>::Array() : _size(0)
{
	arr = new T;
}

template <typename T>

Array<T>::~Array()
{
	delete [] arr;
}
template <typename T>

Array<T>::Array(unsigned int n) : _size(n)
{
	arr = new T[n];
	std::cout << "an array created with the size of" << n << std::endl;
}
template <typename T>

Array<T>::Array(const Array<T> &rhs)
{
	*this = rhs;
}
template <typename T>

Array<T>&	Array<T>::operator=(const Array<T> &rhs)
{
	if (*this != &rhs)
		this->_size = rhs._size;
	return (*this);
}

template <typename T>

T&	Array<T>::operator[](unsigned int i)
{
	if (i >= this->_size)
		throw OutOfRangeException();
	return (arr[i]);
}

template <typename T>

unsigned int	Array<T>::size() const
{
	return (this->_size);
}
