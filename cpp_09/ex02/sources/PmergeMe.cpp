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
			return (false);
		}
		if(str.find_first_not_of("0123456789") != std::string::npos)
		{
			std::cerr << "Error : invalid number (non-numeric char not allowed)" << std::endl;
			return (false);
		}
		_vector.push_back(nb);
		_list.push_back(nb);
	}
	std::cout << "Before : ";
	for (size_t i = 0; i < _vector.size(); i++)
		std::cout << _vector[i] << " ";
	std::cout << std::endl;
	return (true);
}

bool	check_if_pairs_sorted(std::vector<std::pair<unsigned int, unsigned int> > pairs)
{
	for (size_t i = 0; i < pairs.size() - 1; i++)
	{
		if (pairs[i] > pairs[i + 1])
			return (false);
	}
	return (true);
}

void	sort_pairs_recursive(std::vector<std::pair<unsigned int, unsigned int> > &pairs)
{
	if (check_if_pairs_sorted(pairs))
		return;
	for (size_t i = 0; i < pairs.size() - 1; i++)
	{
		if (pairs[i] > pairs[i + 1])
		{
			std::swap(pairs[i], pairs[i + 1]);
			sort_pairs_recursive(pairs);
		}
	}
}

void	PmergeMe::sort_vector()
{
	int	oddNb;

	if (_vector.size() % 2 != 0)
	{
		oddNb = _vector.back();
		_vector.pop_back();
	}
	else
		oddNb = -1;

	std::vector<std::pair<unsigned int, unsigned int> > pairs;
	for (std::vector<unsigned int>::iterator it = _vector.begin(); it != _vector.end(); it++)
	{
		std::pair<unsigned int, unsigned int> newPair;
		std::vector<unsigned int>::iterator itNext = it;
		++itNext;

		if (*it > *itNext)
			newPair = std::make_pair(*it, *itNext);
		else
			newPair = std::make_pair(*itNext, *it);
		pairs.push_back(newPair);
		it++;
	}
	sort_pairs_recursive(pairs);

	_vector.clear();

	_vector.push_back(pairs[0].second);
	for (size_t i = 0; i < pairs.size(); i++)
		_vector.push_back(pairs[i].first);


	size_t	index = 2;
	size_t	nb = 2;
	size_t	temp = index;

	for (size_t	i = 1; i < pairs.size(); i++, nb++)
	{
		int		counter = index;
		std::vector<unsigned int>::iterator it = _vector.begin();
		if (counter != 0)
			index = pow(2, nb) - index;
		else
			counter--;
		if (index > _vector.size())
			index = _vector.size() - 1;
		temp = index;
		while (temp != 0)
		{
			if (pairs[i].second <= _vector[temp] && pairs[i].second >= _vector[temp - 1])
			{
				_vector.insert(it + (temp), pairs[i].second);
				break;
			}
			temp--;
			if (temp == 0)
				_vector.insert(it, pairs[i].second);
		}
	}
	std::vector<unsigned int>::iterator it = _vector.begin();
	if (oddNb != -1)
	{
		unsigned int odd = oddNb;

		if (odd > _vector[0])
		{
			for (size_t i = 1; i < _vector.size(); i++)
			{
				if (odd <= _vector[i] && odd > _vector[i - 1])
				{
					_vector.insert(it + i, odd);
					break;
				}
				if (i == _vector.size() - 1)
				{
					_vector.push_back(odd);
					break;
				}
			}
		}
		else
		{
			_vector.insert(it, odd);
		}
	}
	for(std::vector<unsigned int>::iterator it = _vector.begin(); it != _vector.end(); it++)
		std::cout << *it << " ";
	std::cout << "\n" << std::endl;
}






	//start timer
	//end timer

	// int result = 2;

	// for (int i = 2; i < 10; i++)
	// {
	// 	result = pow (2, i) - result;
	// 	std::cout << result << std::endl;
	// }

	// std::cout << "VECTOR -->" << std::endl;
	// for (std::vector<unsigned int>::iterator it = _vector.begin(); it != _vector.end(); it++)
	// 	std::cout << *it << std::endl;































void	PmergeMe::sort_list()
{
	// std::cout << "LIST -->" << std::endl;
	// for (std::list<unsigned int>::iterator it = _list.begin(); it != _list.end(); it++)
	// 	std::cout << *it << std::endl;
	//start timer
	//end timer
}

