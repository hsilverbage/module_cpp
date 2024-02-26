#ifndef MUTANTSTACKT_HPP
#define MUTANTSTACKT_HPP

#include <iostream>
#include <stack>

template <typename T>

class MutantStack : public std::stack<T>
{
	public :

		MutantStack();
		~MutantStack();
		MutantStack<T>(const MutantStack<T> &rhs);
		MutantStack<T>&	operator=(const MutantStack<T> &rhs);

		// typename T::iterator T	begin();
		T*	end();
};

#include "../sources/MutantStack.tpp"

#endif
