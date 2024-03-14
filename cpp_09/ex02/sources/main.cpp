#include "PmergeMe.hpp"
#include <deque>
#include <vector>

int	main(int argc, char** argv)
{
	if (argc < 3)
	{
		std::cerr << "Error : at least two arguments needed -> ./PmergeMe nb1 nb2 ..." << std::endl;
		return (-1);
	}
	PmergeMe	PmergeMe;

	if (PmergeMe.parsing(argv) == false)
		return (-1);
	PmergeMe.sort_vector();
	PmergeMe.sort_deque();

	return (0);
}
