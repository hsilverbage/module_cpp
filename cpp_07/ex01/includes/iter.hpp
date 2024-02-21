#ifndef	ITER_HPP
#define	ITER_HPP

template <typename T1, typename T2, typename T3>

void	iter(T1* array, T2 len, T3 function)
{
	for (T2 i = 0; i < len; i++)
		function(array[i]);
}

#endif
