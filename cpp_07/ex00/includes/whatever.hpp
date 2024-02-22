#ifndef	WHATEVER_HPP
#define	WHATEVER_HPP

#include <iostream>

template <typename T1>

void	swap(T1& a, T1& b)
{
	T1	temp;

	temp = a;
	a = b;
	b = temp;
}

template <typename T2>

T2	max(const T2& a, const T2& b)
{
	return (a > b ? a : b);
}

template <typename T3>

T3	min(const T3& a, const T3& b)
{
	return (a < b ? a : b);
}

#endif
