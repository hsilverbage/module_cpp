#ifndef	WHATEVER_HPP
#define	WHATEVER_HPP

#include <iostream>

/*
swap: Swaps the values of two given arguments. Does not return anything.

min: Compares the two values passed in its arguments and returns the smallest one.
If the two of them are equal, then it returns the second one.

max: Compares the two values passed in its arguments and returns the greatest one.
If the two of them are equal, then it returns the second one.
*/

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
