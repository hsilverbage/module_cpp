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
}
template <typename T>

Array<T>::Array(const Array<T> &rhs) : _size(rhs._size)
{
	arr = new T[_size];
	for (int i = 0; i < _size; i++)
		arr[i] = rhs.arr[i];
}

template <typename T>

Array<T>&	Array<T>::operator=(const Array<T> &rhs)
{
	if (this != &rhs)
	{
		this->_size = rhs._size;
		delete [] arr;
		arr = new T[_size];
		for (int i = 0; i < _size; i++)
			arr[i] = rhs.arr[i];
	}
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
