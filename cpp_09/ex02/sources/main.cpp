#include "PmergeMe.hpp"

int	main(int argc, char** argv)
{
	if (argc < 2)
	{
		std::cerr << "Error : at least one argument needed" << std::endl;
		return (-1);
	}
	PmergeMe	PmergeMe;

	if (PmergeMe.parsing(argv) == false)
		return (-1); 
	PmergeMe.sort_vector();
	PmergeMe.sort_list();

	return (0);
}
