#ifndef MUTANTSTACKT_HPP
#define MUTANTSTACKT_HPP

#include <iostream>
#include <stack>

template <typename T>

class MutantStack : public std::stack<T>
{
	public :

		typedef typename std::stack<T>::container_type::iterator iterator;

		MutantStack();
		~MutantStack();
		MutantStack<T>(const MutantStack<T> &rhs);
		MutantStack<T>&	operator=(const MutantStack<T> &rhs);

		iterator	begin();
		iterator	end();
};

#include "../sources/MutantStack.tpp"

#endif
