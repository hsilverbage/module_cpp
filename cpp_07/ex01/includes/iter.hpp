#ifndef	ITER_HPP
#define	ITER_HPP

#include <iostream>

template <typename T1, typename T2, typename T3>

void	iter(const T1* array, const T2 len, const T3 function)
{
	for (T2 i = 0; i < len; i++)
		function(array[i]);
}

#endif
