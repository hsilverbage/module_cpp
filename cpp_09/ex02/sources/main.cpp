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

	try
	{
		std::cout << "SORTING WITH TEMPLATES\n" << std::endl;

		std::vector<unsigned int> 	vec;
		std::deque<unsigned int>	deck;

		PmergeMe.parsing_template(argv, vec);
		PmergeMe.parsing_template(argv, deck);


		std::cout << "Before:\t";
		for (size_t i = 0; i < vec.size(); i++)
			std::cout << vec[i] << " ";
		std::cout << std::endl;

		clock_t startTime = clock();
		PmergeMe.sort_template(vec);
		clock_t endTime = clock();
		double elapsedTime = (endTime - startTime) / (double)(CLOCKS_PER_SEC);

		std::cout << "After:\t";
		for (size_t i = 0; i < vec.size(); i++)
			std::cout << vec[i] << " ";
		std::cout << std::endl;

		std::cout << std::fixed << std::setprecision(5);
		std::cout << "Time to process a range of " << vec.size() << " elements with std::vector : " << elapsedTime << " us" << std::endl;

		startTime = clock();
		PmergeMe.sort_template(deck);
		endTime = clock();
		elapsedTime = (endTime - startTime) / (double)(CLOCKS_PER_SEC);

		std::cout << std::fixed << std::setprecision(5);
		std::cout << "Time to process a range of " << deck.size() << " elements with std::deque : " << elapsedTime << " us" << std::endl;
	}
	catch (const std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	{
		std::cout << "\nSORTING WITH OUT TEMPLATES\n" << std::endl;

		if (PmergeMe.parsing(argv) == false)
			return (-1);
		PmergeMe.sort_vector();
		PmergeMe.sort_deque();
	}


	return (0);
}
