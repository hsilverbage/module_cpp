#include "PmergeMe.hpp"

PmergeMe::PmergeMe()
{

}

PmergeMe::~PmergeMe()
{

}

PmergeMe::PmergeMe(const PmergeMe &rhs)
{
	*this = rhs;
}

PmergeMe&	PmergeMe::operator=(const PmergeMe &rhs)
{
	if (this != &rhs)
	{

	}
	return (*this);
}

bool	PmergeMe::parsing(char** argv)
{
	for (unsigned int i = 1; argv[i]; i++)
	{
		std::stringstream	ss(argv[i]);
		std::string	str = argv[i];
		long	nb;

		ss >> nb;
		ss.str();
		if(ss.fail())
		{
			std::cerr << "Error : invalid number" << std::endl;
			return (false);
		}
		if (nb < 0)
		{
			std::cerr << "Error : no negative numbers allowed" <<std::endl;
			return (false);
		}
		if (nb > UINT_MAX)
		{
			std::cerr << "Error : no numbers above " << UINT_MAX << " (max unsigned int) allowed" << std::endl;
		}
		if(str.find_first_not_of("0123456789") != std::string::npos)
		{
			std::cerr << "Error : invalid number (non-numeric char not allowed)" << std::endl;
			return (false);
		}
		_vector.push_back(nb);
		_list.push_back(nb);
	}
	std::cout << "Before :\t"; 
	for (int i = 1; argv[i]; i++)
		std::cout << argv[i] << " ";
	std::cout << std::endl;
	return (true);
}

void	PmergeMe::sort_vector()
{
	// std::cout << "VECTOR -->" << std::endl;
	// for (std::vector<unsigned int>::iterator it = _vector.begin(); it != _vector.end(); it++)
	// 	std::cout << *it << std::endl;
	//start timer
	//end timer

	for (int i = 0; i < 10; i++)
	{
			std::cout << pow(2, ((i + 1))) << std::endl;
	}
	std::cout << std::endl;
}

void	PmergeMe::sort_list()
{
	// std::cout << "LIST -->" << std::endl;
	// for (std::list<unsigned int>::iterator it = _list.begin(); it != _list.end(); it++)
	// 	std::cout << *it << std::endl;
	//start timer
	//end timer
}
