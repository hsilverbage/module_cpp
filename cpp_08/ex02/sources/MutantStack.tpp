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
		std::stack<T>::operator=(rhs);
	}
	return (*this);
}

template <typename T>

typename  std::stack<T>::container_type::iterator	MutantStack<T>::end()
{
	return (std::stack<T>::c.end());
}

template <typename T>

typename  std::stack<T>::container_type::iterator	MutantStack<T>::begin()
{
	return (std::stack<T>::c.begin());
}
