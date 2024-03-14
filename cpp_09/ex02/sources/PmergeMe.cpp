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


bool	check_if_pairs_sorted_vector(std::vector<std::pair<unsigned int, unsigned int> > &pairs)
{
	for (size_t i = 0; i < pairs.size() - 1; i++)
	{
		if (pairs[i] > pairs[i + 1])
			return (false);
	}
	return (true);
}

void	sort_pairs_recursive_vector(std::vector<std::pair<unsigned int, unsigned int> > &pairs)
{
	if (sort_pairs_recursive_vector(pairs);)
		return;
	static size_t i = 0;
	for (; i < pairs.size() - 1; i++)
	{
		if (pairs[i] > pairs[i + 1])
		{
			std::swap(pairs[i], pairs[i + 1]);
			i = 0;
			sort_pairs_recursive_vector(pairs);
		}
	}
}

bool	check_if_pairs_sorted_deque(std::deque<std::pair<unsigned int, unsigned int> > &pairs)
{
	for (size_t i = 0; i < pairs.size() - 1; i++)
	{
		if (pairs[i] > pairs[i + 1])
			return (false);
	}
	return (true);
}

void	sort_pairs_recursive_deque(std::deque<std::pair<unsigned int, unsigned int> > &pairs)
{
	if (std::sort(pairs.begin(), pairs.end()) == pairs)
		return;

	for (size_t i = 0; i < pairs.size() - 1; i++)
	{
		if (pairs[i] > pairs[i + 1])
		{
			std::swap(pairs[i], pairs[i + 1]);
			sort_pairs_recursive_deque(pairs);
		}
	}
}

const char*	PmergeMe::ParsingExceptionNegative::what() const throw()
{
	return ("Error : no negative numbers allowed");
}

const char*	PmergeMe::ParsingExceptionMax::what() const throw()
{
	return ("Error : no numbers above 4294967295 (max unsigned int) allowed");
}

const char*	PmergeMe::ParsingExceptionInvalid::what() const throw()
{
	return ("Error : invalid number (non-numeric char not allowed)");
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
		_deque.push_back(nb);
	}
	std::cout << "Before:\t";
	for (size_t i = 0; i < _vector.size(); i++)
		std::cout << _vector[i] << " ";
	std::cout << std::endl;
	return (true);
}

void	PmergeMe::sort_vector()
{
	int	oddNb;

	clock_t startTime = clock();

	if (_vector.size() % 2 != 0)
	{
		oddNb = _vector.back();
		_vector.pop_back();
	}
	else
		oddNb = -1;

	std::vector<std::pair<unsigned int, unsigned int> > pairs;
	for (std::vector<unsigned int>::iterator it = _vector.begin(); it != _vector.end(); it++, it++)
	{
		std::pair<unsigned int, unsigned int> newPair;
		std::vector<unsigned int>::iterator itNext = it;
		++itNext;

		if (*it > *itNext)
			newPair = std::make_pair(*it, *itNext);
		else
			newPair = std::make_pair(*itNext, *it);
		pairs.push_back(newPair);
	}
	sort_pairs_recursive_vector(pairs);
	// std::sort(pairs.begin(), pairs.end());
	_vector.clear();

	_vector.push_back(pairs[0].second);
	for (size_t i = 0; i < pairs.size(); i++)
		_vector.push_back(pairs[i].first);


	size_t	index = 2;
	size_t	nb = 2;
	size_t	temp = index;
	int		counter = index;

	for (size_t	i = 1; i < pairs.size(); i++)
	{
		std::vector<unsigned int>::iterator it = _vector.begin();
		if (counter == 0)
		{
			index = pow(2, nb) - index;
			nb++;
			counter = index;
		}
		else
			counter--;
		if (index > _vector.size())
			index = _vector.size() - 1;
		temp = index;
		while (temp < _vector.size() && temp != 0)
		{
			if (pairs[i].second <= _vector[temp] && pairs[i].second >= _vector[temp - 1])
			{
				_vector.insert(it + (temp), pairs[i].second);
				break;
			}
			else if (pairs[i]. second <= _vector[temp - 1])
				temp--;
			else
				temp++;
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
			_vector.insert(it, odd);
	}
	clock_t endTime = clock();
	std::cout << "After:\t";
	for (size_t i = 0; i < _vector.size(); i++)
		std::cout << _vector[i] << " ";
	std::cout << std::endl;
	double elapsedTime = (endTime - startTime) / (double)(CLOCKS_PER_SEC);

	std::cout << std::fixed << std::setprecision(5);
	std::cout << "Time to process a range of " << _vector.size() << " elements with std::vector : " << elapsedTime << " us" << std::endl;
}

void	PmergeMe::sort_deque()
{
	int	oddNb;

	clock_t startTime = clock();

	if (_deque.size() % 2 != 0)
	{
		oddNb = _deque.back();
		_deque.pop_back();
	}
	else
		oddNb = -1;

	std::deque<std::pair<unsigned int, unsigned int> > pairs;
	for (std::deque<unsigned int>::iterator it = _deque.begin(); it != _deque.end(); it++, it++)
	{
		std::pair<unsigned int, unsigned int> newPair;
		std::deque<unsigned int>::iterator itNext = it;
		++itNext;

		if (*it > *itNext)
			newPair = std::make_pair(*it, *itNext);
		else
			newPair = std::make_pair(*itNext, *it);
		pairs.push_back(newPair);
	}
	// sort_pairs_recursive_deque(pairs);
	std::sort(pairs.begin(), pairs.end());
	_deque.clear();

	_deque.push_back(pairs[0].second);
	for (size_t i = 0; i < pairs.size(); i++)
		_deque.push_back(pairs[i].first);


	size_t	index = 2;
	size_t	nb = 2;
	size_t	temp = index;
	int		counter = 0;

	for (size_t	i = 1; i < pairs.size(); i++)
	{
		std::deque<unsigned int>::iterator it = _deque.begin();
		if (counter == 0)
		{
			index = pow(2, nb) - index;
			counter = index;
			nb++;
		}
		else
			counter--;
		if (index > _deque.size())
			index = _deque.size() - 1;
		temp = index;
		while (temp < _deque.size() && temp != 0)
		{
			if (pairs[i].second <= _deque[temp] && pairs[i].second >= _deque[temp - 1])
			{
				_deque.insert(it + (temp), pairs[i].second);
				break;
			}
			else if (pairs[i]. second <= _deque[temp - 1])
				temp--;
			else
				temp++;
			if (temp == 0)
				_deque.insert(it, pairs[i].second);
		}
	}
	std::deque<unsigned int>::iterator it = _deque.begin();
	if (oddNb != -1)
	{
		unsigned int odd = oddNb;

		if (odd > _deque[0])
		{
			for (size_t i = 1; i < _deque.size(); i++)
			{
				if (odd <= _deque[i] && odd > _deque[i - 1])
				{
					_deque.insert(it + i, odd);
					break;
				}
				if (i == _deque.size() - 1)
				{
					_deque.push_back(odd);
					break;
				}
			}
		}
		else
			_deque.insert(it, odd);
	}
	clock_t endTime = clock();

	double elapsedTime = (endTime - startTime) / (double)(CLOCKS_PER_SEC);

	std::cout << std::fixed << std::setprecision(5);
	std::cout << "Time to process a range of " << _deque.size() << " elements with std::deque : " << elapsedTime << " us" << std::endl;
}
