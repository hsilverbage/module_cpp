#include "MutantStack.hpp"

template <typename T>

MutantStack<T>::MutantStack()
{

}

template <typename T>

MutantStack<T>::~MutantStack()
{

}

template <typename T>

MutantStack<T>::MutantStack(const MutantStack<T> &rhs)
{
	*this = rhs;
}

template <typename T>

MutantStack<T>&	MutantStack<T>::operator=(const MutantStack<T> &rhs)
{
	if (this != &rhs)
	{
		
	}
	return (*this);
}


// template T::iterator	MutantStack<T>::begin()
// {

// 	return ()
// }

template <typename T>

T*	MutantStack<T>::end()
{
	std::cout << "test" << std::endl;
	return (MutantStack<T>.top());
}
