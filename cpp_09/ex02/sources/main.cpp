#include "PmergeMe.hpp"

int	main(int argc, char** argv)
{
	if (argc < 3)
	{
		std::cerr << "Error : need at least two arguments" << std::endl;
		return (-1);
	}
	PmergeMe	PmergeMe(argv);

	if(PmergeMe.parsing())
	{
		PmergeMe.sort_vector();
		PmergeMe.sort_list();
	}
	return (0);
}
