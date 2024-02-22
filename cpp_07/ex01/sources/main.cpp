#include "iter.hpp"
#include <iostream>

template <typename T>

void	printElement(const T& element)
{
	std::cout << element << std::endl;
}

int	main (void)
{
	std::string test1[] = {"Hello", "World", "!"};
	int			test2[] = {42, 69, 67, 13, 25};
	float		test3[] = {42.42, 16.64, 13.13};

	iter(test1, 3, printElement<std::string>);
	iter(test2, 5, printElement<int>);
	iter(test3, 3, printElement<float>);

	return (0);
}
